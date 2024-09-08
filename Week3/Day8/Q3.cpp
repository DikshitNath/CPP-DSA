#include <iostream>
using namespace std;

std::string concatenateStrings(const std::string &str1, const std::string &str2) {
    return str1 + str2;
}

int main(){
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  cout<<concatenateStrings(str1, str2);
}