#include <iostream>
using namespace std;
int main()
{
	double m,n,p,amount;
	cout << "Enter value for m: ";
	cin >> m;
	cout << "Enter value for n: ";
	cin >> n;
	cout << "Enter value for p: ";
	cin >> p;
	cout << "Enter value for amount: ";
	cin >> amount;
	
	cout <<endl;
	cout << "Result: " << (m+n)/(p+amount) <<endl;
	
	
	return 0;
}
