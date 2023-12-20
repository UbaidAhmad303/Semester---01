#include<iostream>
using namespace std ;
int main ()
{
    int Month ;
	start :
	cout << " Please Enter The Month. \n  " ;
	cin >> Month ;
	
	 switch(Month){
	 	case 1 :
	 	case 3 :
	    case 5 :
	 	case 7 :
	 	case 8 :
	 	case 10 :
	 	case 12 :
	 		cout << " This Month Has 31 Days \n--------------------------------\n " ; 
	        break ;
        case 4 :
	    case 6 :
	    case 9 :
	    case 11 :
	        cout << " This Month Has 30 Days \n--------------------------------\n " ;
	        break ;
	        case 2 :
	       	cout << " This Month Has 28 or 29 Days \n--------------------------------\n " ;
	       	break ;
	    default :
	    	cout << " \t Invaild Month ! \n \t T R Y  A G A I N ! \n Please enter The VALID MONTH. \n-------------------------------\n" ;
	    	break ;
	       	
	        }
       	goto start ;
		 
		 return	0 ; 
}
