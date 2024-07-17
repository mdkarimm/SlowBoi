#include <iostream>
using namespace std;

int main() {
    long int num1,num2=0;
   cout <<"Input the First Number: ";
   cin >>num1;
   cout <<"Input the Second Number: ";
   cin>>num2;
   int n=1;
   int gcd=0;
   if (num2<num1){
         while(n<num2){
            if(num1%n==0){
                gcd = n;
            }
            n++;
         }
   }

    else if (num2> num1){
         while(n<num1){
            if(num2%n==0){
                gcd = n;
            }
            n++;
         }
   }
   else if(num1==num2){
    gcd = num1;
   }
  
  cout <<"The greatest common divisor is: "<<gcd<<endl;


    
    return 0;
}
