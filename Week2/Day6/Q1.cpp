#include <iostream>
using namespace std;

int main() {
    int n, arr[n], sum = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << "Sum of the array: "<< sum;
    

    return 0;
}
