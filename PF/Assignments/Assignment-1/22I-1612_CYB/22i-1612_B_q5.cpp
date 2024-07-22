//Name: Muhammad
//Roll no: 22I-1612
//Assignment # 1

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int num1,num2,num3,num4,num5;
int scale;


cout << "Input Five integer numbers (range 0 to 10): " <<endl;
cout << "N1= ";
cin >> num1;
cout << "N2= ";
cin >> num2;
cout << "N3= ";
cin >> num3;
cout << "N4= ";
cin >> num4;
cout << "N5= ";
cin >> num5;

cout << "Enter scale: ";
cin>>scale;


cout << setw(num1 * scale) << setfill ('*') << "" <<endl;
cout << setw(num2 * scale) << setfill ('*') << "" <<endl;
cout << setw(num3 * scale) << setfill ('*') << "" <<endl;
cout << setw(num4 * scale) << setfill ('*') << "" <<endl;
cout << setw(num5 * scale) << setfill ('*') << "" <<endl;
return 0;
}

