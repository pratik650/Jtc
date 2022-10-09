#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// Class containing whole data sets
class Booking{

public:
//Billing Section 
void Billing(int sum){
    int choice;
    cout<<"Dear Sir/Maam your bill: "<<sum<<endl<<endl;
    cout<<"Do you want to took more then please go to the menu and enjoy another meal."<<endl<<endl<<"1.Menu"<<endl<<"2.Exit"<<endl<<endl;
    cin>>choice;
   switch (choice)
    {
    case 1:
    Upgrade_Menu(sum);
    break;
    case 2:
    cout<<"Have a nice day";
    default:
    break;
    }
    
}

//Menu from where a user starts interacting
void Menu(){
 int choice,sum=0;
 cout<<"Here is our menu: "<<endl<<"1. Espresso"<<endl<<"2. Cappucinno"<<endl<<"3. Latte"<<endl<<endl;
 cin>>choice;
 switch (choice)
    {
    case 1:
    Espresso(sum);
    break;
    case 2:
    Cappucino(sum);
    case 3:
    Latte(sum);
    default:
     break;
    }
}
//For second time addition to the products
void Upgrade_Menu(int sum){
    int choice;
cout<<"Choose your cup to add specific items: "<<endl<<"1. Espresso"<<endl<<"2. Cappucinno"<<endl<<"3.Latte"<<endl;
 cin>>choice;
 switch (choice)
    {
    case 1:
    Espresso(sum);
    break;
    case 2:
    Cappucino(sum);
    case 3:
    Latte(sum);
    default:
    cout<<"Thanks for visiting our shop";
     break;
    }
}


//Items summary start from here
//latte  addition
void latte(int sum){
    cout<<"Latte added succesfully: "<<endl<<"Do you wants to add on something more to the coffee go to the menu in order to add"<<endl<<"1.Menu"<<endl<<"2.Billing"<<endl<<endl;
    
int choice;
cin>>choice;
switch (choice)
{
case 1:
    Upgrade_Menu(sum);
    break;
case 2:
    Billing(sum);
    break;
default:
    break;
}
}
//cream addition
void Cream(int sum){
 cout<<"Cream added succesfully: "<<endl<<"Do you wants to add on something more to the coffee go to the menu in order to add"<<endl<<"1.Menu"<<endl<<"2.Billing"<<endl<<endl;
    
int choice;
cin>>choice;
switch (choice)
{
case 1:
    Upgrade_Menu(sum);
    break;
case 2:
    Billing(sum);
    break;
default:
    break;
}
}

//Add-on Milk
void Milk(int sum){
   cout<<"Milk added succesfully: "<<endl<<"Do you wants to add on something more to the coffee go to the menu in order to add"<<endl<<"1.Menu"<<endl<<"2.Billing"<<endl<<endl;
    
int choice;
cin>>choice;
switch (choice)
{
case 1:
    Upgrade_Menu(sum);
    break;
case 2:
    Billing(sum);
    break;
default:
    break;
}}
//items summary finish here


//cups of coffe description
//espresso addition
void Espresso(int sum){
cout<<"Combination of espresso: "<<endl<<"1.Espresso-milk"<<endl<<"2.Espresso-Cream"<<endl<<"3.Espresso-Latte"<<endl<<"4.Menu"<<endl<<endl;
int choice;
cin>>choice;
switch (choice)
{
case 1:
    sum+=60;
    Milk(sum);
    break;
case 2:
    sum+=75;
    Cream(sum);
    break;
case 3:
    sum+=100;
    latte(sum);
    break;
    case 4:
   Menu();
    break;
default:
    break;
}

}


//Cappucino addition 
void Cappucino(int sum){
cout<<"Combination of Cappucino: "<<endl<<"1.Cappucino-Milk"<<endl<<"2.Cappucino-Cream"<<endl<<"3.Cappucino-Latte"<<endl<<"4.Menu"<<endl<<endl;
int choice;
cin>>choice;
switch (choice)
{
case 1:
    sum+=80;
    Milk(sum);
    break;
case 2:
    sum+=90;
    Cream(sum);
    break;
case 3:
    sum+=125;
    latte(sum);
    break;
case 4:
     Menu();
    break;
default:
    break;
}
}

//Latte addition 
void Latte(int sum){
cout<<"Combination of Latte: "<<endl<<"1.Latte-Milk"<<endl<<"2.Latte-Cream"<<endl<<"3.Latte-latte"<<endl<<"4.Menu"<<endl<<endl;
int choice;
cin>>choice;
switch (choice)
{
case 1:
    sum+=100;
    Milk(sum);
    break;
case 2:
   sum+=125;
    Cream(sum);
    break;
case 3:
sum+=150;
    latte(sum);
    break;
case 4:
    Menu();
    break;
default:
    break;
}
}

};
 

int main(){
    Booking mybooking;
    cout<<"*******************************Welcome to our coffee shop dear sir/ maam******************************* "<<endl<<endl;
    mybooking.Menu();
   
}