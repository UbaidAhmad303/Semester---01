#include <iostream>
using namespace std;

int main() {	
	
	int num ;
	int Factorial = 1 ;
    start :
    cout << " Please enter the number. " << endl ;
    cin >> num ;
    
    /*
    //METHOD NO : 1.( 1 x 2 x 3 x 4 x 5 ) !
    for ( int index = 1 ; index <= num ; index ++ ){
    	Factorial = Factorial * index ;
	}
	cout << " The Factorial of " <<num<< " is " << Factorial << ". \n<-><-><-><-><-><-><-><-><->\n " << endl ;
    */
    
     //METHOD NO : 2.( 5 x 4 x 3 x 2 x 1 ) !
    for ( int index = num ; index >= 1 ; index -- ){
    	Factorial = Factorial * index ;
	}
	cout << " The Factorial of " <<num<< " is " << Factorial << ". \n<-><-><-><-><-><-><-><-><->\n " << endl ;
		
    goto  start ;
	return 0;
}
 
