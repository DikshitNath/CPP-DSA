#include<iostream>
using namespace std;

int stringLength(const std::string &str){
  int i = 0;
  while (str[i])
    i++;
  return i;
}

int main(){
  string str;
  getline(cin, str);
  cout<<stringLength(str);
}