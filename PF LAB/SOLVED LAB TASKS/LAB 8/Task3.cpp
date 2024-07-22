#include <iostream>
using namespace std;

int main() {
    int num;
    
    bool flag = true;
    while (flag) {
        cout << "Enter a number greater than 2: ";
        cin >> num;
        
        if (num <= 2) {
            cout << "Number should be greater than 2." << endl;
        } else {
            flag = false;
        }
    }
    
    cout << "0 1 ";
    int temp = 0;
    int a = 0;
    int b = 1;
    
    while (num > 2) {
        temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
        num--;
    }
    
    return 0;
}
