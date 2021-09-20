#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char str[80];
  char str2[80];
  cin.get(str, 80);
  int count = 0;
  int numOfChars = 0;
  for(int i = 0; i < 80; i++){
    if(isalnum(str[i])){
      str2[count] = str[i];
      count++;
      numOfChars++;
    }
  }
  for(int i = 0; i < count; i++){
    str2[i] = tolower(str2[i]);
  }
  
  str2[count+1] = '\0';
  for(int i = 0; i < count; i++){
    if(str2[i] == str2[count - i]){
      cout << "Palindrome" << endl;
    }
  }
  cout << str << endl;
  cout << str2 << endl;
}
