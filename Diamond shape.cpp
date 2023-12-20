#include <iostream>
using namespace std;

int main() {
 
 
    int Rows ;
    start :
    cout << " Please Enter the number of rows for the diamond. " << endl ;
	cin >> Rows ;
	
	
	//UPPER PART .
	
	for( int i = 1 ; i <= Rows ; i ++ ){
		
		for( int b = 1 ; b <= Rows - i ; b ++ ){
			cout << " " ;
			
		}
		for( int c =1 ; c <= 2 * i - 1 ; c ++ ){
			cout << "*" ;
			
		}
		cout << endl ;
	}  
        
        //LOWER PART .
        
       	for( int i = Rows - 1 ; i >= 1 ; i -- ){
		
		for( int b = 1 ; b <= Rows - i ; b ++ ){
			cout << " " ;
			
		}
		for( int c =1 ; c <= 2 * i - 1 ; c ++ ){
			cout << "*" ;
			
		}
		cout << endl ;
	}  
        goto start ;
        
    return  0 ;
}
