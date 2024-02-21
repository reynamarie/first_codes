/* Title: Calculator
 * Description: This program is a calculator. 
Name: Reyna Maharaj 
Date: Feb 24, 2023
 */

#include <iostream>
using namespace std;
int main() {

  char input;
  double firstnumber, secondnumber;

cout << "Welcome to my Calculator\n " << endl;
cout << "Enter operation to be performed  " << endl;
cout<< "(Note you must type in a +, -, *, or /): ";
cin>> input; 
  
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
  // decimal



  
//input math 
 if (input == '+') 
  {
    cout << "Enter the first number: ";
    cin >> firstnumber;
    cout << "Enter the second number: "  ;
    cin >> secondnumber ;
    cout << "****************************************"<<endl;
   
   cout << firstnumber << " + " <<  secondnumber << " = " << firstnumber+secondnumber << endl; 
  }
else if (input == '-')
   {
    cout << "Enter the first number: ";
    cin >> firstnumber;
    cout << "Enter the second number: "  ;
    cin >> secondnumber ;
cout << "****************************************"<<endl;
     
     cout << firstnumber << " - " << secondnumber << " = " << firstnumber-secondnumber << endl;
   }
else if (input == '*')
   {
    cout << "Enter the first number: ";
    cin >> firstnumber;
    cout << "Enter the second number: "  ;
    cin >> secondnumber ;
    cout << "****************************************"<<endl;
  
   cout << firstnumber << " * " << secondnumber << " = " <<            firstnumber*secondnumber << endl;
   }  
else if (input == '/')
   {
    cout << "Enter the first number: ";
    cin >> firstnumber;
    cout << "Enter the second number: "  ;
    cin >> secondnumber ;
cout << "****************************************"<<endl;
  
  cout << firstnumber << " / " <<  secondnumber << " = " << firstnumber/secondnumber << endl;
   }
else  
   { 
    cout << "Sorry, this isn’t a valid operator. " << endl;
   }

  
  }
