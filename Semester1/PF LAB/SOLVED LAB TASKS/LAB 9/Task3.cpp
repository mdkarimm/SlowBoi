#include <iostream>
using namespace std;

int main() {
    int num1, num2;

   
    cout << "Input the first number: ";
    cin >> num1;

    cout << "Input the second number: ";
    cin >> num2;

   
    int gcd = 1;
    int divisor = 1;

   
    while (divisor <= num1 && divisor <= num2) {
        if (num1 % divisor == 0 && num2 % divisor == 0) {
            gcd = divisor;  
        }
        divisor++;
    }

 
    cout << "The Greatest Common Divisor is: " << gcd << endl;

    return 0;
}
