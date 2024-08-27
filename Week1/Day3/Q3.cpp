#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter an integer: ";
    cin >> N;

    cout << "Multiplication table of " << N << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}
