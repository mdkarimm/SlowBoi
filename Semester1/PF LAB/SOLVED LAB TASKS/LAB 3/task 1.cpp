#include <iostream>
using namespace std;
int main()
{
	
	int n,n2;
	cout << "Enter First number" <<endl;
	cin >> n;
	cout << "Enter second number" <<endl;
	cin>> n2;
	
	//addition
	int sum=0;
	sum = n+n2;
	cout << "The Sum is: " <<sum<<endl;
	//subtraction
	int subtraction=0;
	subtraction = n-n2;
	cout << "The subtraction is: " <<subtraction<<endl;
	//division
	float div=0;
	div= n/n2;
	cout << "The division is: " <<div<<endl;
	//multiplication
	int multiplication=0;
	multiplication= n*n2;
	cout << "The multiplication is: " <<multiplication<<endl;	
	//square
	cout << "Square of first Number: " << n*n<<endl;
	cout << "Square of second number: "<< n2*n2<<endl;
	
	
	
	
	
	
	
	return 0;
}
