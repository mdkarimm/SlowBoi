#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a=0,b=0,c=0;
	cout << "ax2+bx+c=0 "<<endl;
	cout << "Enter the value of a: " ;
	cin >> a;
	cout << "Enter the value of b: " ;
	cin >> b;
	cout << "Enter the value of c: " ;
	cin >> c;
	
	cout << "First Root: " << -b+sqrt( b*b-4*a*c) /2*a<<endl;
	cout << "Second Root: " << (-b + sqrt(b*b -4*a*c)) / 2*a <<endl;
	
	
	
	
	
	return 0;
}
