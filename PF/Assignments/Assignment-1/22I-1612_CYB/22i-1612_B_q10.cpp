//Name: Muhammad
//Roll no: 22I-1612
//Assignment # 1


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const int OnDemand = 3, reserved = 2;
const float spot = 0.5;
int totalonDemandcost, totalreservedcost, totalspotcost;
int a, b, c;

cout << setw(50) << "AWS Cloud Cost Calculator" <<endl;
cout << setw(50) << "*************************" <<endl;


cout << "How many On-demands machines you own: ";
cin >> a;
cout << "How many Reserved machines you own: ";
cin >>b;
cout << "How many Spot machines you own: ";
cin>>c;


totalonDemandcost = ((OnDemand * 24)*30)*a;
totalreservedcost = ((reserved * 24)*30)*b;
totalspotcost = ((spot * 24)*30)*c;
cout << "Cost of On-demand intances: " << totalonDemandcost <<endl;
cout << "Cost of Reserved intances: " << totalreservedcost <<endl;
cout << "Cost of Spot intances: " << totalspotcost <<endl;

return 0;
}
