#include<iostream>
using namespace std ;
int main ()
{
	start :
    int num ;	
	int actual_number ;
	int reverse = 0 ;
	 
	cout << " Please enter he numbers. " << endl ;
	cin >> num ;
	actual_number  = num ;
	
	while ( num > 0 ) {
		reverse = reverse * 10 + ( num % 10 ) ;
		num = num / 10 ;
	}
	
	if ( reverse == actual_number  ){
		cout << actual_number  << " is a PALINDROME number. " << endl ;
	}else{
		cout << actual_number  << " is not a PALINDROME number. "  << endl ;
	}
	goto start ;

	return 0 ;
}
