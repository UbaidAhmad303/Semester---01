#include<iostream>
using namespace std ; 
int main ()
{
	

	for( int A = 0 ; A <= 10 ; A ++ ){
		cout << endl ;
		
		for ( int B = 0 ; B <= A ; B ++ ){
			cout << " * "  ;
		}
	}
	cout << endl ;
	
	for( int C = 0 ; C <= 10 ; C ++ ){	
		for ( int D = 0 ; D < ( 10 - C ) ; D ++ ){
			cout << " * "; 
		}
		
	//	for(int E=0 ; E<C ; E++ ){
			cout << "  " <<endl  ;
		//}
    }
	cout << endl ;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
