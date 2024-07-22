#include <iostream>
using namespace std;
int main()
{
	char a,b, temp;
	cout << "Enter first character: ";
	cin>> a;
	cout << "Enter second character to swap: ";
	cin>>b;
	
	temp = a;
	a=b;
	b=temp;
	
	cout << "Swapped Result" <<endl;
	cout << "first character: " << a <<endl;
	cout << "second character: " <<b<<endl;
	
	
	
	return 0;
}
