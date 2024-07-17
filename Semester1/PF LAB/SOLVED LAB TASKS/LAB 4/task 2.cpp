#include <iostream>
using namespace std;
int main()
{
	int num,temp;
	cout << "Input Number: ";
	cin>> num;
	temp = num;
	num *=2;
	num +=10;
	num = num/2;
	num= num-temp;
	cout <<"Value:"<<num<<endl;
	
	
	
	return 0;
}
