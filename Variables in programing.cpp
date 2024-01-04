#include<iostream>
using namespace std ;
int main ()
{
	// int used for only whose vaules that did't contains piont e.g 300 , 20 ,2 eg.
	int num1 = 20 ;
	int num2 = 60 ;
	int num3 = 80 ;
	int num4 = 100 ;
	
	// float can only used for whose values which contains piont e.g 83.9 , 4.4 etc.
	float num5 = 35.9 ;
	float num6 = 87.3 ;
	float num7 = 207.6 ;
	float num8 = 0.2 ;
	
	//char used for only character (a,b,x,z,y) in progarming.
	char ch1 = 'M'   ;
	char ch2 = 'U' ;
	char ch3 = 'L' ;
	
	int Result ;
	
	Result = num1 + num2 + num3 + num4 + num5 + num6 - num7 - num8 + ch1 + ch2 - ch3 ; 
	 
	num8 = num6 + num5 - num7 ;
	num1 = num4 - num2 ;
	num1++ ;
	num1++ ;
	num2 = num5 - num6 + num2 + num1 ;
	num3 = num2 - num1 - num1 ;
	num3++ ;
	num4 = num5 - num3 ; 
	num5 = num2 -num1 + num3 -num4 + num5 + num8 ;
	num4++ ;
	num6 = num6 + num7 ;
	ch1 = num4 ;
//	ch2 = num2 - num5 ;
//	ch3 = ch1 ;
//	ch2 = 600 ;
//	ch1 = 4 ;
//	ch3 = 80 ;
	
	cout << " The sum of " <<num1<< "," <<num2<< "," <<num3<< "," <<num4<< " , " <<num5<< " , " <<num6<< " , " <<num7<< " , "<<num8<<  " , " <<ch1<< " , " <<ch2<< " and " <<ch3<< " is " <<Result<<endl ;
	
	cout << "\n\n \t 2 Nov 2023 " ;
	cout << " \n\n For experience how to use VARIABLES in PROGRAMING. " ;
	cout << " \n Not as a sotf. \n GOODLUCK " ;
	
	return 0 ;
}
