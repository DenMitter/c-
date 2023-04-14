#include <iostream>
using namespace std;

int main() {
    int num = 3, num_ = 7;

    int* ptr_num = &num;
    int* ptr_num_ = &num_;

    int temp = *ptr_num;
    *ptr_num = *ptr_num_;
    *ptr_num_ = temp;

    cout << "one " << num << " two " << num_ << endl;

    return 0;
}