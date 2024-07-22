#include <iostream>
using namespace std;
int main()
{
	float price, totalsaleamount, tax;
	int quantity;
	cout << "input unit price of chocolate mini bar: ";
	cin>> price;
	cout << "input the quantity of chocolates sold: ";
	cin>> quantity;
	totalsaleamount = price * quantity;
	tax = (totalsaleamount*10)/100;
	totalsaleamount -= tax;
	cout <<endl;
	cout << "total sales amount of chocolates after tax deduction: " << totalsaleamount<<endl;
	
	return 0;
}
