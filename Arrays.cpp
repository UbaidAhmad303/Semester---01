#include <iostream>
using namespace std ;
int main ()
{
    //ARRAYS
	//On place of Length we use any Word.	
	int Length ;
	cout << " Please enter the Arrays Size.\n " ;
	cin >> Length ;
	cout<< " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl ;
	int numbers [ Length ] ;
	for ( int index = 0 ; index < Length ; index ++ ){
		cout << " Please enter the number. \n " ;
		cin >> numbers [ index ] ;
	}
	cout<< " Winded up. " <<endl ;
	// ARRAYS printing.
	cout<< " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl ;
	cout<< " The numbers you have entered are following below. " <<endl ;
	for ( int index = 0 ; index < Length ; index ++ ){
		cout<< numbers [ index ]<< "." << endl ;
    }
	
	return 0 ; 
}
