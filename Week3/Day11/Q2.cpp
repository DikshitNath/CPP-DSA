#include<iostream>
using namespace std;

int findTargetInArray(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i+1;
        }
    }
    return -1;
}

int main(){
  int n, x;
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  
  cin >> x;

  cout << findTargetInArray(arr, n, x);
}