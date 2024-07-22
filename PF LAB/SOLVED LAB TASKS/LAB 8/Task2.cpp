#include <iostream>
using namespace std;
int main(){

    int num=0,limit=0;
    cout <<"Enter the Number: ";
    cin>>num;
    bool flag=1;
    while(flag){
        cout<<"Enter the Limit: ";
        cin>>limit;
        if (limit<0){
            cout<<"Limit cannot be in -ve " <<endl;
        }
        else flag=0;
    }
    int n=1;
    while(limit>0){
        
        cout <<num<<" * "<<n<<" = " <<num*n<<endl;
        n=n+1;
        limit--;
    }

    return 0;
}