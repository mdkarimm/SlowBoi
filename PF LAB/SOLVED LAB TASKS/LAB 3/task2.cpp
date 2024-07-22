#include <iostream>
using namespace std;
int main()
{
	int ageinyears;
	int ageinmonths;
	cout << "Enter your age in years: ";
	cin >>ageinyears;
	
	ageinmonths = 12*ageinyears;
	cout << "age in months: "<<ageinmonths<<endl;
	
	
	return 0;
}
