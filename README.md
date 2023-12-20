# Semester---01

#include<iostream>
using namespace std ;
int main ()
{
	int Year ;
	start :
	cout << " Please Enter The Year. \n " ;
	cin >> Year ;
	
	if(Year % 4 == 0) {
		cout << Year << " is a Leap Year. \n\n-------------------------\n\n " ;
	}else{
		cout << Year << " is not a Leap Year. \n\n-------------------------\n\n " ;
		
	}
	goto start ;
	
	
	
	
	
	return 0 ;
}
