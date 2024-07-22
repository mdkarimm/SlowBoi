//Name: Muhammad
//Roll no: 22I-1612
//Assignment # 1




#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  float  cost,levy,tax,sale,extras;
  
  cout<<"Enter MOGAS PSO Weighted Average cost of supply: ";
  cin>>cost;
  
  cout<<"Petrol levy %: ";
  cin>>levy;
  levy/=100;
  
  cout<<"Sales Tax %: ";
  cin>>tax;
  tax/=100;
  
  extras=3.68+7.00+4.76;
  sale=cost+(cost*levy)+(cost*tax)+extras;
  cout<<"Max Ex-Depot Sale Price = Rs. " <<setprecision(2) <<fixed <<sale<<endl;
  
  return 0;
 
}
