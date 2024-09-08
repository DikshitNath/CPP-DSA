#include <iostream>
using namespace std;

int main() {
    int num = 5;

    int* ptr1 = &num;
    int** ptr2 = &ptr1;

    cout << "Value using the integer variable: " << num << endl;
    cout << "Value using the pointer to the integer: " << *ptr1 << endl;
    cout << "Value using the pointer to the pointer: " << **ptr2 << endl;

    return 0;
}
