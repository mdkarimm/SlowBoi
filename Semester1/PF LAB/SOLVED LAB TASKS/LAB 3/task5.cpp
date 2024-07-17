#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int age;
	char degree;
	float cgpa;
	cout << "Enter your name: ";
	getline(cin,name);
	cout << "Enter your age: ";
	cin >> age;
	cout << "First character of your degree(B for Bachelors degree, M for Master’s degree, P for PhD degree): ";
	cin >> degree;
	cout << "Enter your CGPA: ";
	cin >> cgpa; 
	
	cout <<endl;
	cout << "Name: "<<name<<endl;
	cout <<"Age: " <<age<<endl;
	cout<< "Degree: " <<degree <<endl;
	cout<< "CGPA: " <<cgpa<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
