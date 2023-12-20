#include<iostream>
using namespace std ;
int main ()
{
	int Digits ;
	start :
	cout << " Please Enter The Numbers. \n " ;
	cin >> Digits ;
	int reverse = 0 ;
	
	while ( Digits > 0 ){
		reverse = reverse * 10 + ( Digits % 10 ) ;
		Digits = Digits / 10 ;
	}
	cout << " The Reverse is " << reverse << endl ;
	cout << endl ;
	goto start ;
	
	return 0 ;
}
