/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int age,h,b;
    string _char;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    if(age<=25)
    {
      cout << "Enter your height: ";
      cin >> h;
      if(h < 100)
      {
        _char = "Chopper";
      }
      if(h < 180)
      {
        _char = "Usopp";
      }else{
        cout << "Enter your bounty: ";
        cin >> b;
        if (b > 11*pow(10,8)){
            _char ="Zoro";

        } else _char ="Sanji";
      }
    
    }else if( age <= 60) 
    {
        cout << "Enter your bounty: ";
        cin >> b;
        if (b > 5*(pow(10,8)))
        {
            _char = "Jinbe";
        }else{
            _char = "Franky";
        }
    }else{
        _char = "Brooke";

    }
   cout << "Your character = " << _char;
   return 0;


}