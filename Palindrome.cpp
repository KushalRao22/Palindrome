/*
This is a project that checks if input is a palindrome
Last Modified 9/28
By: Kushal Rao 
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char str[81];//Create String for Input
  char str2[81];// String for all alnums and remove the rest
  char rstr[81];// Create reverse String
  cin.get(str, 81);
  int count = 0;//To keep track of how many alnnums
  int palindromeNum = 0;
  for(int i = 0; i < 80 && str[i]  !='\0'; i++){
    if(isalnum(str[i])){
      str2[count] = str[i];//Add all alnums
      count++;
    }
  }
  for(int i = 0; i < count; i++){
    str2[i] = tolower(str2[i]);//Make it lower case
  }
  for(int i = 0; i < count; i++){
    rstr[i] = str2[count-i-1];//reverse the array
  }
  for(int i = 0; i < count; i++){
    if(rstr[i] == str2[i]){//check if each the charectars is the same as flipped
      palindromeNum++;
      }
  }
  if(palindromeNum == count){//If all charecters can be flipped
    cout << "Palindrome" << endl;// Say it is a Palindrome
  }
  else{
    cout << "Not a Palindrome" << endl;//Say it is not a palindrome
  }
}
