#include<iostream>
using namespace std ;
int main ()
{
	int Age ;
	start :
	cout << " Please Enter Your Age. \n " ;
	cin >> Age ;
	
	if (Age < 26 && Age > 14 ) {
		cout << " \t CONGRATULATION ! \n You Are Eligible For This Selection \n We Are Contact With You As Soon As Possible. \n----------------------------------------\n " ;
	}else{
		cout << " \t     SORRY ! \n You Are Not Eligible For This Selection \n\n ";
		cout << " \t T R Y  A G A I N ! \n  Please Age Must Be From 15 To 25. \n----------------------------------------\n " ; 
	}
	
	goto start ; 
	

	return 0 ;
}
