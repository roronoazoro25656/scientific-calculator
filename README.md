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
