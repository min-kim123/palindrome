#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main() {
  char str[80];
  char strlower[80];
  cin.get(str, 80);
  cout << "Welcome to the Palindrome Checking Program!" << endl;
  cout << "Enter here: ";
  cin.get(str, 80);
  for (int i = 0; i < 80; ++i) {
    strlower = tolower(str[i]);
  }
  for (int i = 0; i < 80; ++i) {
    cout << strlower[i];
  }
  cout << str;
  //get input
  //remove spaces
