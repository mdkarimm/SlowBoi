//Name: Muhammad
//Roll no: 22I-1612
//Assignment # 1



#include <iostream>
#include <iomanip>
using namespace std;
int main()
{


float price1, price2, price3, price4, price5, totalprice;
float tax1,tax2,tax3,tax4,tax5, totaltax;
float totalprice1, totalprice2, totalprice3, totalprice4, totalprice5, totalpriceall;


//taking the input of price
cout << "Price of item 1 = $";
cin >> price1;
cout << "Price of item 2 = $";
cin >> price2;
cout << "Price of item 3 = $";
cin >> price3;
cout << "Price of item 4 = $";
cin >> price4;
cout << "Price of item 5 = $";
cin >> price5;
totalprice= price1+price2+price3+price4+price5;

//calculating tax of 17%
tax1 = price1 * 0.17;
tax2 = price2 * 0.17;
tax3 = price3 * 0.17;
tax4 = price4 * 0.17;
tax5 = price5* 0.17;
totaltax = tax1 + tax2 + tax3 + tax4 + tax5;






//caculating total amount to be paid
totalprice1 = price1+tax1;
totalprice2 = price2+tax2;
totalprice3 = price3+tax3;
totalprice4 = price4+tax4;
totalprice5 = price5+tax5;
totalpriceall= totalprice1 + totalprice2 + totalprice3 + totalprice4 + totalprice5;




//output recipt
cout<<"***************************************************" <<endl;
cout << "ITEM";
cout << setw (10) << "PRICE";
cout << setw (21) << "SALES TAX (@17%)";
cout << setw (16) << "total price" <<endl;
cout << 1;
cout << setw (13) << setprecision(2)<< fixed<< price1;
cout << setw (16) << setprecision(3) << fixed << tax1;
cout << setw (16) <<setprecision(2) << fixed << totalprice1 << endl;
cout << 2;
cout << setw (13) << setprecision(2)<< fixed<< price2;
cout << setw (16) << setprecision(3) << fixed << tax2;
cout << setw (16) <<setprecision(2) << fixed << totalprice2 << endl;
cout << 3;
cout << setw (13) << setprecision(2)<< fixed<< price3;
cout << setw (16) << setprecision(3) << fixed << tax3;
cout << setw (16) <<setprecision(2) << fixed << totalprice3 << endl;
cout << 4 ;
cout << setw (13) << setprecision(2)<< fixed<< price4;
cout << setw (16) << setprecision(3) << fixed << tax4;
cout << setw (16) <<setprecision(2) << fixed << totalprice4 << endl;
cout << 5;
cout << setw (13) << setprecision(2)<< fixed<< price5;
cout << setw (16) << setprecision(3) << fixed << tax5;
cout << setw (16) <<setprecision(2) << fixed << totalprice5 << endl;
cout << "Total";
cout << setw (9) << setprecision(2)<<fixed<<totalprice;
cout << setw (16) << setprecision(2)<<fixed<<totaltax;
cout << setw (16) << setprecision(2)<<fixed<< totalpriceall <<endl;


return 0;
}

