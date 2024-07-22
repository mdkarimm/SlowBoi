#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;  
    bool flag=1;
    while(flag){
        cout << "Enter a number (<= 20) to find its factorial: ";
        cin >> num;
        
        if (num > 20) {
            cout << "Number should be less than or equal to 20." << endl;
        }
        else flag =0;
        
    }
    
    int i = 1;
    cout << "Factorial of " << num << " is ";
    
    
    while (i <= num) {
        factorial *= i;
        
        if (i < num) {
            cout << i << " * ";
        } else {
            cout << i << " = ";
        }
        
        i++;
    }
    
    cout << factorial << endl;
    
    return 0;
}
