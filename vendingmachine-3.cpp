/* 
 * Title:  vendingmachine
 * Description: This program works like a Hartnell Vending Machine
 * Author: Reyna Maharaj
 * Date: March 3, 2023
 */

#include <iostream>
using namespace std;
int main()
{

int money, choice;
float amount = 0 ; 
float product =0;
float change = 0;
  
cout << "Welcome to the Vending Machine" << endl;
cout<< "Insert money: " ; 
  cin>> money;
cout << "Today's Menu" << endl;
cout << "   1. Coffee: ($2)" << endl;
cout << "   2. Soda: ($3)" << endl;
cout << "   3. Energy Drink: ($5)" << endl;
cout << "   4. Water: ($1)  " << endl;
cout << "\nSelect your choice: ";
  cin >> choice;
//choices.
  
switch(choice) 
  {
case 1:
  if(money >=2){
            product = 2;
            change = money - product;
            cout << "You selected coffee." << endl;
            cout << "Your change: $" << change << endl;
            cout << "Have a nice day!" << endl;
            //coffee.
     }
else 
     {
            cout << "Sorry! You don’t have enough money." <<endl; 
          cout << "Your change: $" << change << "\nHave a nice day!" << endl;
     }
    
        break;
    default:
  switch (choice ){
case 2: 
  if(money >= 3)
      {
            product = 3;
            change = money - product;
            cout << "You selected soda." << endl;
            cout << "Your change: $" << change << endl;
            cout << "Have a nice day!" << endl;
            //soda.
     } 
else 
     {
            cout << "Sorry! You don’t have enough money." << endl;
    cout << "Your change: $" << money << "\nHave a nice day!" << endl;
     }
  break;
case 3:
  if(money >=5){
            product = 5;
            change = money - product;
            cout << "You selected energy drink." << endl;
            cout << "Your change: $" << change << endl;
            cout << "Have a nice day!" << endl;
            //energy drink.
     }
  else 
    {
            cout << "Sorry! You don’t have enough money." << endl;
    cout << "Your change: $" << money << "\nHave a nice day!" << endl;
     }
        break;
case 4:
   if(money >=1){
            product = 1;
            change = money - product;
            cout << "You selected water." << endl;
            cout << "Your change: $" << change << endl;
            cout << "Have a nice day!" << endl;
            //water.
      }
    else 
      {
            cout << "Sorry! You don’t have enough money." << endl ;
       cout << "Your change: $" << money << "\nHave a nice day!" << endl;
        //not enough money. 
      }
    break;
default :
      if (choice != 1 || choice != 2 || choice != 3 || choice != 4) {
				cout << "Sorry! That's an invalid choice." <<endl;
				change = money - product;
				cout << "Your change : $"<< money <<endl;
				cout << "Have a nice day!";
        //invalid choice. 
				break;
      }
      
      }
    
      
      return 0;
  } }
  
