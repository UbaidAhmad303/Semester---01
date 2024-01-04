#include<iostream>
using namespace std ;

    int  PrintAddition ( int n1 , int n2 , int n3 , int n4 ){
    	int sum = n1 + n2 + n3 + n4 ;
    	cout << " The sum of " <<n1<< " , "<<n2<< " , "<<n3<< " and "<<n4<<" is "<<sum <<endl ;
    	}
    	
    	 int  Printsubtraction ( int n1 , int n2 , int n3 , int n4 ){
    	int subtraction = n1 - n2 - n3 - n4 ;
    	cout << " The difference of " <<n1<< " , "<<n2<< " , "<<n3<< " and "<<n4<<" is "<<subtraction <<endl ;
    	}
    	
        int  Printmultiplication ( int n1 , int n2 , int n3 , int n4 ){
    	int multiplication = n1 * n2 * n3 * n4 ;
    	cout << " The multiplication of " <<n1<< " , "<<n2<< " , "<<n3<< " and "<<n4<<" is "<<multiplication <<endl ;
    	}
    	
    	int Printdivision ( int n1 , int n2 , int n3 , int n4 ){
    	int division = n1 / n2 / n3 / n4 ;
    	cout << " The division of " <<n1<< " , "<<n2<< " , "<<n3<< " and "<<n4<<" is "<<division <<endl ;
    	}
    	
        int  Printremainder ( int n1 , int n2 , int n3 , int n4 ){
    	int remainder = n1 % n2 % n3 % n4 ;
    	cout << " The remainder of " <<n1<< " , "<<n2<< " , "<<n3<< " and "<<n4<<" is "<<remainder <<endl ;
    	}
int main ()
{
	int num1 ;
	int num2 ;
	int num3 ;
	int num4 ;
	int result ;
	cout << " Please enter the numbers." <<endl ;
	cin >> num1 >> num2 >> num3 >> num4 ;
	
	result = PrintAddition ( num1 , num2 , num3 , num4 ) ;
	
	result = Printsubtraction ( num1 , num2 , num3 , num4 ) ;
	
	result = Printmultiplication ( num1 , num2 , num3 , num4 ) ;
	
	result = Printdivision ( num1 , num2 , num3 , num4 ) ;
	
	result = Printremainder ( num1 , num2 , num3 , num4 ) ;
	
	return 0 ;
}
