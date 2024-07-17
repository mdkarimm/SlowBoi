#include <iostream>
using namespace std;
int main()
{
	int time;
	cout << "input time in seconds: ";
	cin>> time;
	
	cout <<endl;
	cout <<"Time: " << time/3600 <<" hours: " << (time%3600)/60 << " minutes: " <<(time%3600)%60 << " seconds " <<endl;
	
	return 0;
}
