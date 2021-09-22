#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char str[81];
  char str2[81];
  char rstr[81];
  cin.get(str, 80);
  int count = 0;
  int numOfChars = 0;
  for(int i = 0; i < 80 && str[i]  !='\0'; i++){
    if(isalnum(str[i])){
      str2[count] = str[i];
      count++;
      numOfChars++;
    }
  }
  for(int i = 0; i < count; i++){
    str2[i] = tolower(str2[i]);
  }
  for(int i=0;i<sizeof(str)/2;i++){
     char temp=str[i];
     str[i]=str[sizeof(str)-i-1];
     str[sizeof(str)-i-1]=temp;
    }
  for(int i = 0; i < count; i++){
    
  }
  cout << count << endl;
  cout << str << endl;
  cout << str2 << endl;
  cout << rstr << endl;
}
