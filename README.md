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
 	cout << "\n\nENTER THE OPTION: ";
	cin >> c;
	
	switch(c){
		
		case 1:
	cout << "\n---------------MENU----------------";
	cout << "\n    1. ADDITION";
	cout << "\n    2. SUBTRACTION" ;
	cout << "\n    3. MULTIPLICATION";
	cout << "\n    4. DIVISION" ;
	int menu;
	cout << "\nEnter Option: ";
	cin >> menu;
	switch(menu){
		case 1:
			int a,b;
			cout << "\nEnter First Number: " ;
			cin >> a;
			cout << "\nEnter Second Number: " ;
			cin >> b;
			cout << "\nThe Addition is " << a+b;
			break;
		case 2:
			int c,d;
			cout << "\nEnter First Number: " ;
			cin >> a;
			cout << "\nEnter Second Number: " ;
			cin >> b;
			cout << "\nThe Subtraction is " << a-b;
			break;
			case 3:
			int e,f;
			cout << "\nEnter First Number: " ;
			cin >> a;
			cout << "\nEnter Second Number: " ;
			cin >> b;
			cout << "\nThe Multiplication is " << a*b;
			break;
			case 4:
			int g,h;
			cout << "\nEnter First Number: " ;
			cin >> a;
			cout << "\nEnter Second Number: " ;
			cin >> b;
			cout << "\nThe Division is " << a/b;
			break;
			default:
			cout << "\nINVALID OPTION";
			
		
	}
	break;
 case 2:
	cout << "\n---------------MENU----------------";
	cout << "\n    1. SINE";
	cout << "\n    2. COSINE" ;
	cout << "\n    3. TANGENT" ;
	cout << "\n    4. SINE INVERSE";
	cout << "\n    5. COSINE INVERSE" ;
	cout << "\n    6. TANGENT INVERSE" ;	

	    	cout << "\n ENTER OPTION: ";
	    	cin >> menu;
	    	
	    	switch(menu){
	    		
	    		case 1:
	    			int a;
	    			cout << "\nEnter a Number: ";
	    			cin >> a;
	    			cout << "\nSin( " << a << " ) is " << sin(a);
	    			break;
	    		case 2:
	    			cout << "\nEnter a Number: ";
	    			cin >> a;
	    			cout << "\nCos( " << a << " ) is " << cos(a);
	    			break;
	    		case 3:
	    			cout << "\nEnter a Number: ";
	    			cin >> a;
	    			cout << "\nTan( " << a << " ) is " << tan(a);
	    			break;
	    		case 4:
	    			cout << "\nEnter a Number: ";
	    			cin >> a;
	    			cout << "\nArcsin( " << a << " ) is " << asin(a);
	    			break;
	    		case 5:
	    			cout << "\nEnter a Number: ";
	    			cin >> a;
	    			cout << "\nArccos( " << a << " ) is " << acos(a);
	    			break;
	    		case 6:
	    			cout << "\nEnter a Number: ";
	    			cin >> a;
	    			cout << "\nArctan( " << a << " ) is " << atan(a);
	    			break;
	    		default:
	    		    cout <<	"\nINVALID OPTION";
	    	
			}
			break;
   case 3:
	cout << "\n---------------MENU----------------";
	cout << "\n    1. EXPONENTIATION";
	cout << "\n    2. SQUARE ROOT" ;
	cout << "\n    3. CUBE ROOT" ;
	cout << "\n    4. nTH ROOT " ;
	cout << "\n    5. FACTORIAL" ;
	cout << "\n    6. ABSOLUTE VALUE" ;	

	    	cout << "\n\n ENTER OPTION: ";
	    	cin >> menu;
				
			switch(menu){
	    		
	    		case 1:
	    			float base, exponent;
	    			cout << "\nEnter The Base: ";
	    			cin >> base;
	    			cout << "\nEnter The Exponent: ";
	    			cin >> exponent;
	    			cout << "\n\npow( " << base << " , " << exponent << " )  =  " << pow(base,exponent);
	    			break;
	    		case 2:
	    			double num;
	    			cout << "\nEnter A Number: ";
	    			cin >> num;
	    			cout << "\nThe Square Root of " << num << " is: " << sqrt(num);
	    			break;
	    		case 3:
	    			cout << "\nEnter A Number: ";
	    			cin >> num;
	    			cout << "\nThe Cube Root of " << num << " is: " << cbrt(num);
	    			break;
	    		case 4:
	    			int n;
	    			cout << "\nEnter A Number: ";
	    			cin >> num;
	    			cout << "\nEnter The Value of N ";
	    			cin >> n;
	    			cout << "\nThe " << n << " Root of " << num << " is: " << pow(num,1.0/n);
	    			break;
	    		case 5:
	    			cout << "\nEnter A Number: ";
	    			cin >> num;
	    			for(int i=num; i>=1; i--){
	    				cout << endl << i;
	    				fact*=i;
					}
					cout << "\nThe Factorial of " << num << " is: " << fact;
					break;
				case 6: 
				    cout << "\nEnter A Number: ";
				    cin >> num;
				    
				    cout << "The Absolute Value of " << num << " is: " << abs(num);
				    break;
					
                    default:
				    cout <<	"\nINVALID OPTION";
	}
	                break;
				    


