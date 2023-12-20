#include<iostream>
using namespace std ;
int main ()
{
	int Days ;
	start:
    cout << " Please Enter The Day " <<endl ;
	cin >> Days ;
//	cout << " This Is The December Month Of 2023 " <<endl  ;
	 
	switch(Days){
		
		case 1 :
		case 8 :
		case 15 :
		case 22 :
		case 29 :
			cout <<  "  Friday  " <<endl ;
			break ;
		case 2 :
		case 9 :
		case 16 :
		case 23 :
		case 30 :
			cout << " Saturday  " <<endl ;
			break ;
		case 3 :
		case 10 :
		case 17 :
		case 24 :
		case 31 :
		     cout << " Sunday  " <<endl ;
			 break ;
		case 4 :
		case 11 :
		case 18 :
		case 25 :
			cout << " Monday  " <<endl ;
			break ;
		case 5 : 
		case 12 :
		case 19 :
		case 26 :
			cout << " Tuesday  " <<endl ;
			break ;
		case 6 :
		case 13 :
		case 20 :
		case 27 :
			cout << " Wednesday  " <<endl ;
			break ;
		case 7 :
		case 14 :
		case 21 :
		case 28 :
			cout << " Thusrday  " <<endl ;
			break ;
			
	}
     cout << " This Is The December Month Of 2023 \n " <<endl  ;
    goto start ;
	return 0 ;
}
