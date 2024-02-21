  /* 
 * Title: guess number
 * Description: This program has you guess  a number from 1 to 10.
 * Author: Reyna Maharaj
 * Date: March 25 , 2023 
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

//Declaring integers.
srand(time(0)); 
int randnum = rand() % 10 + 1;
int num, guessCount = 0;
const int maxGuesses = 3;

//Tells user to guess the number.
while(true) { 
    cout << "Guess a number from 1 and 10: "; 
      cin >> num;

//The user guesses the correct number.  
if(num == randnum){
    cout << "Correct! The number was " << randnum << "." << endl;
        break; 
  } 
  else if( num < 1 || num > 10) //The user enters a number that is not between 1 and 10.
  {
    cout << "Enter a number from 1 to 10" << endl;
  }
  else 
  {
    cout << "Incorrect. Try again." << endl; 
    if (num < randnum)
        cout << "Try a higher number>" << endl;
    if (num > randnum)
        cout << "Try a lower number" << endl;
  }
  guessCount++;
}

if (guessCount == maxGuesses)
{
  cout<< "You have ran out of guesses. The number was" << randnum << "." << endl;
}
  

return 0;
}

