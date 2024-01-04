#include <iostream>
using namespace std ;
int main ()
{
	int num1 = 10 ;
	int num2 = 20 ;
	int num3 = 40 ;
	int result ;
	
	//USING THE POINTERS.
	
	int *ptr1 = &num2 ;
	int *ptr2 = &num1 ;
	*ptr2 = 90 ;
	num3++ ;
	result = *ptr2 + num3 + *ptr1 ;
	cout << result << endl ;
	
	result = num3 * *ptr1 ;
	cout << result <<endl ;
	
	return 0 ;
}
