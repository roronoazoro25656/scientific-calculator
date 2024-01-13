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
	    case 4: 
	cout << "\n---------------MENU----------------";
	cout << "\n    1. LOGARITHM (base 10)";
	cout << "\n    2. NATURAL LOGARITHM (base e)" ;
	cout << "\n    3. CUSTOM BASE LOGARITHM" ;	

	    	cout << "\n\n ENTER OPTION: ";
	    	cin >> menu; 
			
			switch(menu) {
				
				case 1:
					int num;
					
					cout << "\nEnter A Number: ";
					cin >> num;
					if(num>=0){
					cout << "\nThe Log (base 10) of " << num << " is: " << log10(num);
				}else {
					cout << "\nINVALID NUMBER";
				}
					break;
				
				case 2:
					
					cout << "\nEnter A Number: ";
					cin >> num;
					if(num>=0){
					cout << "\nThe Natural Log (base e) of " << num << " is: " << log(num);
				}else {
					cout << "\nINVALID NUMBER";
				}
					break;
				
				case 3:
					double base;
					cout << "\nEnter A Number: ";
					cin >> num;
					cout << "\nEnter A Base: ";
					cin >> base;
					
					if(num>=0 && base>=0){
					cout << "\nThe Custom Log (base " << base << " ) of "  << num << " is: " << log(num)/log(base);
				}else {
					cout << "\nINVALID NUMBER";
				}
					break;
				
				default:
				 cout << "\nINVALID OPTION"	;
					
			}   
			
			break;
			
        case 5: 
		
	cout << "\n---------------MENU----------------";
	cout << "\n    1. MODULUS (REMAINDER)";
	cout << "\n    2. PERCENTAGE CALCULATOR" ;
	cout << "\n    3. GREATEST COMMON DIVISOR  (GCD)" ;
	cout << "\n    4. LEAST COMMON MULTIPLE (LCM)";
	cout << "\n    5. FLOOR (ROUND DOWN)" ;
	cout << "\n    6. CEILING (ROUND UP)" ;
	
	cout << "\n\n ENTER OPTION: ";
	cin >> menu; 
	
	switch(menu) {
				
				case 1: {
					
					int num1, num2, remainder;
					 
					cout << "Enter First Number: ";
					cin >> num1;
					cout << "Enter Second Number: ";
					cin >> num2;
					
					remainder= num1 % num2 ;
					
					cout << "The Modulus of Two Numbers are " << remainder ;
					
					
					break;
				}
				
				case 2: {
					
					float num1, num2;
				    float percent; 
					 
					cout << "Enter Marks Obatined : ";
					cin >> num1;
					cout << "Enter Total Number: ";
					cin >> num2;
					
					percent = num1/num2*100;
		
					cout << "The Percentage is " << percent ;

					
					break;
				}
				
				case 3: {
					
					int a , b , c;
					int smallest;
					
					cout << "Enter First Number: ";
					cin >> a;
					cout << "Enter Second Number: ";
					cin >> b;
					cout << "Enter Third Number: ";
					cin >> c;
					
					
					
					if(a<b && a<c) {
						smallest = a;
					}else if(b<a && b<c) {
						smallest = b;
					}else{
						smallest = c;
					}
						
					int gcd;
					for(int i=smallest;i>=1;i--) {
	            	if(a%i==0 && b%i==0 && c%i==0) {
			        gcd = i;
			break;
		}
	}
	
	       cout << "The GCD of The Numbers are "<<gcd;
					
					
					break;
				}
				
				case 4: {
					
						int a , b , c;
					int lcm;
					
					cout << "Enter First Number: ";
					cin >> a;
					cout << "Enter Second Number: ";
					cin >> b;
					cout << "Enter Third Number: ";
					cin >> c;
					
					
					for(int i=1;i<=a*b*c;i++) {
			if(i%a==0 && i%b==0 && i%c==0) {
			lcm = i;
			break;
		}
	}
	
	       cout << "The LCM of The Numbers are "<<lcm;
					
					break;
				}
				
				case 5: {
					
                double number;
				
				cout << "Enter A Number To Round Up: ";
				cin >> number;
				
				
            cout << "The rounded down number is: " << floor(number);
					
			break;
				}
				
				case 6: {
					
				double number;
				
				cout << "Enter A Number To Round Up: ";
				cin >> number;

            cout << "The rounded down number is: " << ceil(number);	
					
					
					break;
				}
				
				default:
	    		    cout <<	"\nINVALID OPTION";
	    		    
	    		break;
	    	}
	    	
	    	break;
	    		
	    case 6: {
	    	
	    	cout << "\n---------------MENU----------------";
	cout << "\n    1. ADDITION OF COMPLEX NUMBERS";
	cout << "\n    2. SUBTRACTION OF COMPLEX NUMBERS" ;
	cout << "\n    3. MULTIPLICATION OF COMPLEX NUMBERS" ;
	cout << "\n    4. DIVISION OF COMPLEX NUMBERS";
	cout << "\n    5. CONJUGATE OF COMPLEX NUMBERS" ;
	
	cout << "\n\n ENTER OPTION: ";
	cin >> menu; 
	
	switch(menu) {
		
		case 1: {
			
    double real1, imag1, real2, imag2;
    double realSum, imagSum;

    cout << "Enter The Real Part of the First Complex Number: ";
    cin >> real1;
	
	cout << "Enter The Imaginary Part of the First Complex Number: ";
	cin>> imag1;

    cout << "Enter The Real Part of the Second Complex Number: ";
    cin >> real2;
	
	cout << "Enter The Imaginary Part of the Second Complex Number: ";
	cin>> imag2;

    realSum = real1 + real2;
    imagSum = imag1 + imag2;

    cout << "\n\nThe sum of the complex numbers is: " << realSum << " + " << imagSum << "i" << endl;			
			
			
			break;
		}
		
		case 2: {
			
	double real1, imag1, real2, imag2;
    double realSub, imagSub;

    cout << "Enter The Real Part of the First Complex Number: ";
    cin >> real1;
	
	cout << "Enter The Imaginary Part of the First Complex Number: ";
	cin>> imag1;

    cout << "Enter The Real Part of the Second Complex Number: ";
    cin >> real2;
	
	cout << "Enter The Imaginary Part of the Second Complex Number: ";
	cin>> imag2;

    realSub = real1 - real2;
    imagSub = imag1 - imag2;

    cout << "\n\nThe Subtraction of the complex numbers is: " << realSub << " - " << imagSub << "i" << endl;			
			
			break;
		}
		
		case 3: {
			
						
	double real1, imag1, real2, imag2;
    double realSub, imagSub;

    cout << "Enter The Real Part of the First Complex Number: ";
    cin >> real1;
	
	cout << "Enter The Imaginary Part of the First Complex Number: ";
	cin>> imag1;

    cout << "Enter The Real Part of the Second Complex Number: ";
    cin >> real2;
	
	cout << "Enter The Imaginary Part of the Second Complex Number: ";
	cin>> imag2;

    realSub = real1*real2 - imag1*imag2 ;
    imagSub = real1*imag2 + imag1*real2;

    cout << "\n\nThe Multiplication of the complex numbers is: " << realSub << " + " << imagSub << "i" << endl;
			
			break;
		}
		
		case 4: {
			
	double real1, imag1, real2, imag2;
    double realSub, imagSub, denominator;

    cout << "Enter The Real Part of the First Complex Number: ";
    cin >> real1;
	
	cout << "Enter The Imaginary Part of the First Complex Number: ";
	cin>> imag1;

    cout << "Enter The Real Part of the Second Complex Number: ";
    cin >> real2;
	
	cout << "Enter The Imaginary Part of the Second Complex Number: ";
	cin>> imag2;
	
    denominator = real2*real2 + imag2*imag2;
    realSub = (real1*real2 + imag1*imag2) / denominator;
    imagSub = (real1*imag2 - imag1*real2) / denominator;

    cout << "\n\nThe Division of the complex numbers is: " << realSub << " + " << imagSub << "i" << endl;
    
			break;
		}
		
		case 5: {
			
		double real1, imag1;
		
        cout << "Enter The Real Part of the First Complex Number: ";
    	cin >> real1;
	
		cout << "Enter The Imaginary Part of the First Complex Number: ";
		cin>> imag1;


        double real_part = real1;
    	double imaginary_part = -imag1;

    	cout << "\nThe conjugate of the complex number is: " << real_part << " + " << imaginary_part << "i" << std::endl;

			break;
		}
		
		default:
	    		    cout <<	"\nINVALID OPTION";
		
	}	
		break;
		}
		
		default:
	    		    cout <<	"\nINVALID OPTION";
			
}
					
				
}
