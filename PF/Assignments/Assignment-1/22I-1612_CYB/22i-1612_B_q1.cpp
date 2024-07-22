//Name: Muhammad
//Roll no: 22I-1612
//Assignment # 1

#include <iostream>
using namespace std;


int main()
{
int number_of_egg, pack1, pack2, pack3, pack4, left_eggs;
int remainder, remainder1, remainder2, remainder3;
cout<<"Enter the total number of eggs to be packed" << endl;
//storing eggs in variables with different size packings
cin >> number_of_egg;                   
pack1 = number_of_egg / 30;       
remainder = number_of_egg % 30;           
pack2 = remainder / 24;
remainder1= remainder%24;
pack3 = remainder1 / 12;
remainder2 = remainder1%12;
pack4 = remainder2 / 6;
remainder3 = remainder2%6;
left_eggs = remainder3;

cout << "the total numbers of packaging possible: " <<endl
<< "30 eggs pack: "<< pack1 <<endl
<< "24 eggs pack: " <<pack2 <<endl
<< "12 eggs pack: "<< pack3 <<endl
<< "6 eggs pack: " << pack4 <<endl
<< "eggs left: " << left_eggs << endl;


 


return 0;
}
