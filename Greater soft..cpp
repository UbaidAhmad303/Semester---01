#include<iostream>
using namespace std ;
int main ()
{
	int num1 ;
	int num2 ;
	start:
	cout << " Please Enter The First Number \n " ;
	cin >> num1 ;
	cout << " Please Enter The Second Number \n " ;
	cin >> num2 ;
	
	if(num1 > num2){
		cout << num1 << " is greater number than " <<num2 ;
		}else{
			
			if(num1 == num2){
			cout << num1 << " is equal to "<< num2  ;
		}else{
			
			if (num2 > num1)
			cout << num2 << " is greater number than  " << num1 ;
	}
	}
			
			cout << " \n\n \t Date 13 Novemeber 2023 \n\n\n " ;
            goto start ;
return 0 ;
}

