#include <iostream>
#include <iomanip> 
#include <cmath> 
using namespace std;

int main() {
    int n;
    double sum = 0.0;

   
    cout << "Input the value for nth term: ";
    cin >> n;

  
    for (int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i);
        sum += term;
        cout << "1/" << i << "^" << i << " = " << fixed << setprecision(6) << term << endl;
    }

    
    cout << "The sum of the above series is: " << fixed << setprecision(5) << sum << endl;

    return 0;
}
