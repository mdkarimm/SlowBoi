#include <iostream>
using namespace std;
int main()
{
	int amount=0;
	int hours=0, extra=0;
	
	cout << "How many hours you worked?: ";
	cin >> hours;
	
	extra = hours %40;
	amount = (hours*1000)+(500*extra);
	cout << "total wage: " << amount <<endl;
	
	
	
	return 0;
}
