#include <iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout << "Enter a three digit number: ";
	cin>> num;  
	sum+=(num/100);        
	num = num%100;
	sum+=num/10;
	num = num%10;
	sum = sum+num;
	cout << "Sum of the digits is: " <<sum<<endl;
	
	
	
	
	
	return 0;
}
