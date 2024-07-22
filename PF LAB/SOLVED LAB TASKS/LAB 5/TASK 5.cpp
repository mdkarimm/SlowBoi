#include <iostream>
using namespace std;

/*Find the result of the following operations:
a) 5+4
b) 10/2
c) True OR False
d) 20 MOD 70
e) 5&lt;8
f) 25 MOD 70
g) NOT True
h) 25\70
i) False AND True
j) 20*0.5
k) 35&lt;=35
l) 35/7
m) False OR False
n) True AND True
o) 50 MOD 5
p) -35/67 */


int main()
{
cout << "a) 5+4= " << 5+4 << endl;
cout << "b) 10/2= " << 10/2 << endl;
cout << "c) True OR False: " << (1 || 0)  << endl;
cout << "d) 20 MOD 70: " << 20%70  << endl;
cout << "e) 5<8: " << (5 < 8) << endl;
cout << "f) 25 MOD 70: " << 25%75 << endl;
cout << "g) NOT True: " << !1 << endl;
cout << "h) 25\70: " << 25/70 << endl;
cout << "i) False AND True: " << (0 && 1) << endl;
cout << "j) 20*0.5 " << 20*0.5 << endl;
cout << "k) 35 <=35: " << (35 <=35) << endl;
cout << "l) 35/7: " << 35/7 << endl;
cout << "m) False OR False: " << (0 || 0)<< endl;
cout << "n) True AND True: " << (1 && 1)<< endl;
cout << "o) 50 MOD 5: " << 50%5 << endl;
cout << "p) -35/67: " << -35/67 << endl;
return 0;
}

