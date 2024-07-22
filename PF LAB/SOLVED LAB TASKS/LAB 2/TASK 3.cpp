#include <iostream>
using namespace std;
int main()
{
	float tempinF;
	float tempinC;
	cout << "Enter Temperature in Fahrenheit " <<endl;
	cin >> tempinF;
	
	//Calculating the temperature in Celsius
	tempinC = (tempinF-32.00) * 5/9;
	cout << "Temperature in Celsius: " <<tempinC<<endl;
	
	return 0;
}
