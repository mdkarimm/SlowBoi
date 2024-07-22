//Name: Muhammad
//Roll no: 22I-1612
//Assignment # 1



#include <iostream>
#include <string>

using namespace std;

int main()
{

char a,b,c,d,e,f,g,h;
char A,B,C,D,E,F,G,H;

cout << "Enter a word of any 8 random letters in small case: " ;
cin.get(a);
cin.get(b);
cin.get(c);
cin.get(d);
cin.get(e);
cin.get(f);
cin.get(g);
cin.get(h);
//using ascii value to convert into uppercase letter
A = a-32;
B = b-32;
C = c-32;
D = d-32;
E = e-32;
F = f-32;
G = g-32;
H = h-32;

 
 cout << "Your entered word in capital case is "<< A <<B << C << D << E << F << G << H <<endl;
return 0;
}
