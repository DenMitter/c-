#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

const int MAX_SIZE = 100;

struct Task {
    string title;
    int priority;
    string description;
    string dateTime;
};

class TaskList {
private:
    Task tasks[MAX_SIZE];
    int count;

public:
    TaskList() {
        count = 0;
    }

    void addTask() {
        if (count >= MAX_SIZE) {
            cout << "Список справ заповнений. Неможливо додати нову справу." << endl;
            return;
        }

        Task newTask;
        cout << "Введіть назву справи: ";
        cin.ignore();
        getline(cin, newTask.title);
        cout << "Введіть пріоритет (ціле число): ";
        cin >> newTask.priority;
        cout << "Введіть опис справи: ";
        cin.ignore();
        getline(cin, newTask.description);
        cout << "Введіть дату та час виконання: ";
        getline(cin, newTask.dateTime);

        tasks[count++] = newTask;

        cout << "Справа успішно додана!" << endl;
    }

    void deleteTask() {
        if (count == 0) {
            cout << "Список справ порожній. Неможливо видалити справу." << endl;
            return;
        }

        int index;
        displayTasks();

        cout << "Введіть номер справи, яку бажаєте видалити: ";
        cin >> index;

        if (index >= 1 && index <= count) {
            for (int i = index - 1; i < count - 1; i++) {
                tasks[i] = tasks[i + 1];
            }
            count--;
            cout << "Справа успішно видалена!" << endl;
        }
        else {
            cout << "Невірний номер справи." << endl;
        }
    }

    void editTask() {
        if (count == 0) {
            cout << "Список справ порожній. Неможливо редагувати справу." << endl;
            return;
        }

        int index;
        displayTasks();

        cout << "Введіть номер справи, яку бажаєте редагувати: ";
        cin >> index;

        if (index >= 1 && index <= count) {
            Task& task = tasks[index - 1];

            cout << "Введіть нову назву справи: ";
            cin.ignore();
            getline(cin, task.title);
            cout << "Введіть новий пріоритет (ціле число): ";
            cin >> task.priority;
            cout << "Введіть новий опис справи: ";
            cin.ignore();
            getline(cin, task.description);
            cout << "Введіть нову дату та час виконання: ";
            getline(cin, task.dateTime);

            cout << "Справа успішно відредагована!" << endl;
        }
        else {
            cout << "Невірний номер справи." << endl;
        }
    }

    void searchTasksByTitle(const string& title) {
        bool found = false;

        for (int i = 0; i < count; i++) {
            if (tasks[i].title == title) {
                displayTask(tasks[i]);
                found = true;
            }
        }

        if (!found) {
            cout << "Справи з такою назвою не знайдено." << endl;
        }
    }

    void searchTasksByPriority(int priority) {
        bool found = false;

        for (int i = 0; i < count; i++) {
            if (tasks[i].priority == priority) {
                displayTask(tasks[i]);
                found = true;
            }
        }

        if (!found) {
            cout << "Справи з таким пріоритетом не знайдено." << endl;
        }
    }

    void searchTasksByDescription(const string& description) {
        bool found = false;

        for (int i = 0; i < count; i++) {
            if (tasks[i].description == description) {
                displayTask(tasks[i]);
                found = true;
            }
        }

        if (!found) {
            cout << "Справи з таким описом не знайдено." << endl;
        }
    }

    void searchTasksByDateTime(const string& dateTime) {
        bool found = false;

        for (int i = 0; i < count; i++) {
            if (tasks[i].dateTime == dateTime) {
                displayTask(tasks[i]);
                found = true;
            }
        }

        if (!found) {
            cout << "Справи з такою датою та часом виконання не знайдено." << endl;
        }
    }

    void displayTasks() {
        if (count == 0) {
            cout << "Список справ порожній." << endl;
            return;
        }

        cout << "Список справ:" << endl;
        for (int i = 0; i < count; i++) {
            cout << "Справа #" << (i + 1) << endl;
            displayTask(tasks[i]);
        }
    }

    void displayTask(const Task& task) {
        cout << "Назва: " << task.title << endl;
        cout << "Пріоритет: " << task.priority << endl;
        cout << "Опис: " << task.description << endl;
        cout << "Дата та час виконання: " << task.dateTime << endl;
        cout << endl;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    TaskList taskList;
    int choice;

    while (true) {
        cout << "Список справ:" << endl;
        cout << "1. Додати справу" << endl;
        cout << "2. Видалити справу" << endl;
        cout << "3. Редагувати справу" << endl;
        cout << "4. Пошук справ" << endl;
        cout << "5. Відобразити список справ" << endl;
        cout << "6. Вийти" << endl;
        cout << "Виберіть опцію: ";
        cin >> choice;

        switch (choice) {
        case 1:
            taskList.addTask();
            break;
        case 2:
            taskList.deleteTask();
            break;
        case 3:
            taskList.editTask();
            break;
        case 4:
            int searchChoice;
            cout << "Пошук справ за:" << endl;
            cout << "1. Назвою" << endl;
            cout << "2. Пріоритетом" << endl;
            cout << "3. Описом" << endl;
            cout << "4. Датою та часом виконання" << endl;
            cout << "Виберіть опцію: ";
            cin >> searchChoice;

            switch (searchChoice) {
            case 1: {
                string title;
                cout << "Введіть назву справи для пошуку: ";
                cin.ignore();
                getline(cin, title);
                taskList.searchTasksByTitle(title);
                break;
            }
            case 2: {
                int priority;
                cout << "Введіть пріоритет для пошуку (ціле число): ";
                cin >> priority;
                taskList.searchTasksByPriority(priority);
                break;
            }
            case 3: {
                string description;
                cout << "Введіть опис справи для пошуку: ";
                cin.ignore();
                getline(cin, description);
                taskList.searchTasksByDescription(description);
                break;
            }
            case 4: {
                string dateTime;
                cout << "Введіть дату та час виконання для пошуку: ";
                cin.ignore();
                getline(cin, dateTime);
                taskList.searchTasksByDateTime(dateTime);
                break;
            }
            default:
                cout << "Невірний вибір." << endl;
                break;
            }
            break;
        case 5:
            taskList.displayTasks();
            break;
        case 6:
            cout << "Дякую за використання додатку!" << endl;
            return 0;
        default:
            cout << "Невірний вибір." << endl;
            break;
        }

        cout << endl;
    }
}
