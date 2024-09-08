#include<iostream>
using namespace std;

bool findTargetInArray(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main(){
  int n, x;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cin >> x;

  if (findTargetInArray(arr, n, x)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}