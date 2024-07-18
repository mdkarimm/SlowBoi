#include <iostream>
using namespace std;

int main() {
    cout << "input the number of lines that shape must cover: ";
    int num;
    cin>>num;

    int half= num/2;
    if(num%2 !=0){
        half++;
    }

    for (int i=0; i<half;i++){
        for (int j=0; j<=i; j++){
            cout << "*";
        }
        cout <<endl;
    }

      for (int i=half; i<num;i++){
        for (int j=num; j>i; j--){
            cout << "*";
        }
        cout <<endl;
    }
    
    return 0;
}
