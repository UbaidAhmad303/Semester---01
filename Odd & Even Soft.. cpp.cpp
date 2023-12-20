#include<iostream>
using namespace std ;
int main() 
{
	int input ;
	int remainder;
	start :
	cout << "Please Enter The Number \n " ;
	cin >> input ;
	
	remainder = input % 2 ;
	
	if(remainder == 1  ){
	cout << input << " is an Odd number \n " << endl  ;	
	}else{
		if(remainder == 0 ){
			cout << input << " is an Even number \n " << endl  ;
		}
	
		}
    goto start ;
	
	
	
	
	return 0 ;
}
