#include <iostream>
using namespace std;
int main()
{
	float tempinC, tempinF;
	cout << "Enter temperature in degree Celsius (C): ";
	cin >> tempinC;
	tempinF = tempinC*(9/5)+32;
	cout << "Temperature in Fahrenheit (F): " <<tempinF<<endl;;
	
	return 0;
}
