//Name: Muhammad
//Roll no: 22I-1612
//Assignment # 1

#include <iostream>
using namespace std;

int main()
{
int fivedigit_number;
int a,b,c,d,e;
cout << "Enter a 5-digit number: ";
cin >> fivedigit_number;

//selecting each digit and storing it in a separate variable
a = fivedigit_number/10000;
b = fivedigit_number/1000;
b = b%10;
c = fivedigit_number/100;
c = c%10;
d = fivedigit_number/10;
d = d%10;
e = fivedigit_number%10;


//modifying number

a = a/2;
b= b/2 ;
c = c/2;
d = d/2;
e = e/2;
cout << "Modified number: " << e<< d <<c <<b<<a <<endl;

return 0; 
}




