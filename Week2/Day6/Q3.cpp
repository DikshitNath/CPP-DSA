#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n], even = 0, odd = 0;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    
    cout << "Number of odd numbers: "<< odd <<"\n";
    cout << "Number of even numbers: "<< even;
    

    return 0;
}
