#include<iostream>
using namespace std;

 int countCharacter(const std::string &str, char ch){
  int x = 0;
  for(char c : str){
    if (c == ch) x++;
  }
  return x;
 }

int main(){
  string str;
  getline(cin, str);
  char ch;
  cin>>ch;
  cout<<countCharacter(str, ch);
}