#include<iostream>
using namespace std ;
int main ()
{
	int num1 ;
	int num2 = 100 ;
	int num3 ;
	int Average , Division , Remainder ;
	
	cout << " Please Enter The First Number(Smaller than SECOND number). \n " ;
	cin >> num1 ;
	cout << " Please Enter The Second Number(Greater than FIRST number). \n " ;
	cin >> num3 ;
	
	//Average of two numbers ;
	Average = num1 * num2 ;
	cout << "1- The Average of " <<num1<< " and " <<num2<< " is " <<Average<<endl ;
	
	//Division of two number ;
	Division = Average / num3 ;
	cout << "2- The Division of" <<Average<< " and "<<num3<< " is " <<Division<<endl ;
	
	//Remainder of two numbers ;
	Remainder = Average % num3 ;
	cout << "3- The Remainder of " <<Average<< " and " <<num3<< " is " <<Remainder<<endl ;
	
	cout << " \n\n \t 3 Nov 2023 " ;
	
	return 0 ;
}
