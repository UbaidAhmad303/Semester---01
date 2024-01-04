#include<iostream>
using namespace std ;
int main ()
{
	start :
	int num ;
	cout << " Please enter the number." <<endl ;
	cin >> num ;
	
	for ( int index = num ; index >= 1 ; index -- ){
		if ( num % index == 0 )
		cout << index << endl ;
	}
		cout << " These are the factors of " <<num <<endl ;
		cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ " ;
		cout << " \n " <<endl ;
		goto start ;
		
	return 0 ;
}
