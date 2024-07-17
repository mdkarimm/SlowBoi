#include <iostream>
#include <string>
using namespace std;

int main()
{

string icecream_type;
char size;
int price;
cout << "MENU" <<endl << "1) CONE" <<endl << "2) CUP" <<endl;


cout << " Please input the type of ice cream you want? " <<endl;
cin>> icecream_type;


if (icecream_type == "cup" || icecream_type =="CUP" || icecream_type =="Cup")
{
cout << "enter the size as a single character: " <<endl;
cin>> size;

 if (size == 's' || size == 'S')
 {
 price = 20 + 50;
 cout << "Total bill: " << price <<endl;
 }
 else if (size == 'm' ||size == 'M')
 {
 price = 20 + 80;
 cout << "Total bill: " << price <<endl;
 }
 else if (size == 'l' ||size == 'L')
 {
 cout << "Total bill: " << price <<endl;
 price = 20 + 120;
 }
}
else if (icecream_type == "Cone" || icecream_type =="cone" || icecream_type =="CONE")
{
cout << "how many scoops do you want.: " <<endl;
cin >> size; 
price = (10)+(size*30);
cout << "Total bill: " << price <<endl;
}






  
  
  
  












return 0;
}
