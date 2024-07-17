#include <iostream>
using namespace std;
int main()
{
	
	float a,b,c;
	cout << "Enter the values of a, b and c separated by a space" <<endl;
	cin >>a>>b>>c;
	cout <<"Result: " << (a*a) + (b*b) + (c*c) + (2*(a*b+b*c+c*a))<<endl;
	return 0;
}
