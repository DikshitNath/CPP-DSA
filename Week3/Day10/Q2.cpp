#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower
using namespace std;

bool isPalindrome(const string &str) {
  int left = 0;
  int right = str.length() - 1;

  while (left < right) {
    while (left < right && !isalnum(str[left])) {
      left++;
    }

    while (left < right && !isalnum(str[right])) {
      right--;
    }

    if (tolower(str[left]) != tolower(str[right])) {
      return false;
    }

    left++;
    right--;
  }

  return true;
}

int main() {
  string str;

  getline(cin, str);

  if (isPalindrome(str))
    cout<<"true";
  else
    cout<<"false";

  return 0;
}
