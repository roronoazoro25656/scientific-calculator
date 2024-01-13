# scientific-calculator
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

void statement();


int main()
{
	char ch;
	do {	
		statement();	
		cout << "\n\nContinue(y/n):" ;
		cin >> ch;
		cout << "\n\n";
	}while(ch=='y'||ch=='Y');
	
	return 0;
}
void statement(){
	
	
	int c;
	int fact = 1;

	
	cout << "\n---------------MENU----------------";
	cout << "\n    1. BASIC OPERATIONS";
	cout << "\n    2. TRIGNOMETRIC OPERATIONS";
	cout << "\n    3. ALGEBRIC OPERATIONS";
	cout << "\n    4. LOGARITHMIC OPERATIONS";
	cout << "\n    5. ADDITIONAL OPERATIONS";
	cout << "\n    6. COMPLEX NUMBER OPERATIONS";


