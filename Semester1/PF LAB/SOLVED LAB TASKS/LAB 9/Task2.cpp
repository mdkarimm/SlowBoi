#include <iostream>
using namespace std;

int main() {
    cout << "input the number of lines that shape must cover: ";
    int num;
    cin >> num;

    int half = num / 2;
    if (num % 2 != 0) {
        half++;
    }


    int m = 1;
    for (int i = 0; i < half; i++) {
        for (int j = i; j < half - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < m; k++) {
            cout << "*";
        }
        m += 2;
        cout << endl;
    }

    
    m = num - 2;
    for (int i = half; i < num; i++) {
        for (int j = half; j <= i; j++) {
            cout << " ";
        }
        for (int k = 0; k < m; k++) {
            cout << "*";
        }
        m -= 2;
        cout << endl;
    }

    return 0;
}
