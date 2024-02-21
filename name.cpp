/* 
* Title:  name.cpp
* Description: This program prints the given name in capital letters, states the number of letters there are, and prints the name backwards. 
* Author: Reyna Maharaj
* Date: May 13, 2023 
*/
//Summary: This program prints the given name in capital letters, states the number of letters there are, and prints the name back wards. 
//Precondition: The user inputs a first and last name.
//Postcondition: The program will return the given name in capital letters, states the number of letters there are, and prints the name back wards. 
//*/
#include <iostream>
#include <string>
using namespace std;
int main() {
  
  string name1, name2;

  //Prompts the user to enter their first and last name.
  cout << "Enter a first name: ";
    cin >> name1;
  cout << "Enter a last name: ";
    cin >> name2;

  int namelength = name1.length() + name2.length();

  // Prints how many letters the name contains.
  cout << name1 << " " << name2 << " contains " << namelength << " letters." << endl;

  // Prints all capital letters
  string fullname = name1 + " " + name2;
  string capsname = "";
  for (char c : fullname) {
       capsname += toupper(c);
    }
  cout << capsname << endl;

  // Prints the letters individually.
  for (int i = 0; i < fullname.length(); i++) {
      if (fullname[i] == ' ') {
          cout << endl;
        } else {
           cout << fullname[i] << endl;
      }
  }

   // Name backwards.
  string namebackwards = "";
  for (int i = fullname.length() - 1; i >= 0; i--)  {
       namebackwards += fullname[i];
    }
  cout << name1 << " " << name2 << " backwards is " << namebackwards << "." << endl;

return 0;
}