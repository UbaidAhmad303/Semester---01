#include<iostream>
using namespace std ;
int main () 
{
	
	int Table ;
	int index ;
	start :
	cout << " \n Please enter the number. \n  " ;
	cin >> Table ;
	cout << " Table of " << Table << endl ;
	for(index = 0 ; index <= 20 ; index++){
		cout << Table << " x " << index << " = " << Table * index << endl  ;
		
	}
	goto start ;
	return 0 ;
}
