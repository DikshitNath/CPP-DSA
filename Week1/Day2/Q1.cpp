#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, largest;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the third integer: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
