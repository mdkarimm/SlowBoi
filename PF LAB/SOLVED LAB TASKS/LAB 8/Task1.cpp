#include <iostream>
using namespace std;
int main(){

    cout <<"Enter 10 integers: ";
    int even =0, odd=0;
    int i=0;
    int num;
    while(i<10){
        cin>> num;
        if(num%2==0){
            even++;
        }
        else {
            odd++;
        }
        i++;
    }

    cout <<"Total Even Numbers: "<<even <<endl;
    cout <<"Total Odd Numbers: "<<odd <<endl;

    return 0;
}