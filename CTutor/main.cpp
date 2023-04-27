#include <iostream>
using namespace std; 

struct Rectangle {
	int width;
	int height;

	Rectangle() {
		width = 1;
		height = 1;
	}
	Rectangle(int width, int height) {
		cout << "\nRectangle created" << endl;
		this->height = height;
		this->width = width;
	}
	~Rectangle() {
		cout << "\nRectangle deleted" << endl;
	}

	void show() {
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width-1; j++) {
				cout << "*\t";
			}
			cout << "*\n";
		}
	}
	void changeSize(int height, int width) {
		this->height = height;
		this->width = width;
	}
};

int main(void) {
	Rectangle rectangle(5, 7);
	rectangle.show();

	cout << endl << endl;

	rectangle.changeSize(7, 8);
	rectangle.show();
	return 0; 
}