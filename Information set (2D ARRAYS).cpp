#include <iostream>
using namespace std ;
int main()
{
	
	int Marks [5][2] ;
	
	for ( int i = 0 ; i < 5 ; i ++ ){
		cout << " Please enter the Roll No. \n " ;
		cin >> Marks [i][0] ;
		
		cout << " Please enter the Marks. \n " ;
		cin >> Marks [i][1] ;
	
		cout << "==========================\n" ;
	}
	
	cout << " Roll No. \t Marks  \n " ;
	for ( int i = 0 ; i < 5 ; i ++ ) {
		cout << Marks [i][0] << " \t \t " << Marks [i][1] <<  " \n " ;

	}
	
	return 0 ;
}
