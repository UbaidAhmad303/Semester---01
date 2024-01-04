#include<iostream>
using namespace std ;
int main ()
{
	char Vowel ;
   
	start :
		
	cout << " Please Enter The Alphabat \n " ;
	cin >> Vowel ;
	
	switch( Vowel ){
		
	  	case 'A' :
		case 'a' :
		case 'E' :
		case 'e' :	
		case 'I' :
		case 'i' :	
		case 'O' :
		case 'o' :
		case 'U' :
		case 'u' :
			cout << " This Alphabat Is Vowel \n--------------------------\n\n " ;
			break ;
			
	    default :
		    cout << " This Alphabat Is Consunent \n-------------------------\n\n " ;
		    break ;		
	}
	goto start ;
	
	
	return 0 ;
}
