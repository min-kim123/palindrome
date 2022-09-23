
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
  char userInput[80];
  char cleaninput[80];
int i;
  
  int count = 0;
  
  bool palindrome = true;

  cout << "Welcome to the palindrome checking program!" << endl;
  cout << "Please type a word or a phrase: ";

  cin.getline(userInput ,80);

  // total length
  for(int i=0; userInput[i]!='\0';i++)
  {
      count= i;
    }

  // remove punctuation
int counter = 0;
//use ascii chart
//uppercase becomes lowercase if you add 32
for(int i =0; userInput[i]!='\0';i++) 
{
  if (userInput[i] >= 'A' && userInput[i] <= 'Z'){
    cleaninput[counter] = userInput[i] +32;
    counter++;
    }
//if it is already lowercase or if it is a number(beteween 48 and 57) add to counter and then repeat loop
  else if ((userInput[i] >= 48 && userInput[i] <= 57)|| (userInput[i] >= 'a' && userInput[i] <= 'z')){
    cleaninput[counter] = userInput[i];
    counter++;
    }
}
//divide the clean input into 2 and then loop that many times
//if first half is equal to second half continue
//exit as soon as it finds one that is not equal
for (i = 0; i <= (counter/2); i++) {
  if (cleaninput[i] == cleaninput[counter - i - 1] ) {
    continue;
  }
  else {
    palindrome = false;
    break;
  }
}
// different things to output based on whether it's a palindrome or not
  if (palindrome) {
    cout << userInput << " is a palindrome!" << endl;
  }
  else {
    cout << userInput << " is not a palindrome!" << endl;
  }

}
