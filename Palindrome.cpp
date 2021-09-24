#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char str[80];
  char str2[80];
  char rstr[80];
  cin.get(str, 80);
  int count = 0;
  int palindromeNum = 0;
  for(int i = 0; i < 80 && str[i]  !='\0'; i++){
    if(isalnum(str[i])){
      str2[count] = str[i];
      count++;
    }
  }
  for(int i = 0; i < count; i++){
    str2[i] = tolower(str2[i]);
  }
  for(int i = 0; i < count; i++){
    rstr[i] = str2[count-i-1];
  }
  for(int i = 0; i < count; i++){
    if(rstr[i] == str2[i]){
      palindromeNum++;
      }
  }
  if(palindromeNum == count){
    cout << "Palindrome" << endl;
  }
  else{
    cout << "Not a Palindrome" << endl;
  }
}
