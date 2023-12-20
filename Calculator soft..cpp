#include<iostream>
using namespace std;

int main()
{
    
    int  num1 ;
    int  num2 ;
    int  Sum , Difference , Division , Average , Remainder  ;
    
    
    cout << " Please entered the first number.\n " ;
    cin >> num1 ;
    
    cout << " Please entered the second number.\n " ;
    cin >> num2 ;
    
    
    // Sum of the two numbers. ;
    Sum = num1 + num2 ; 
    cout <<  "1- The Sum of " << num1 << " and " << num2 << " is " << Sum << endl ;
    
    
    
    //Difference of two numbers. ; 
    Difference = num1 - num2 ;
    cout << "2- The Difference of " << num1 << " and " << num2 << " is " << Difference << endl ;
    
    
    
    // Average of two numbers. ;
    Average = num1 * num2 ;
    cout << "3- The Average of " << num1 << " and " << num2 << " is " << Average << endl ;
    
    
    
    //Division of two numbers. ;
    Division = num1 / num2 ;
    cout << "4- The Division of " << num1 << " and " << num2 << " is " <<  Division << endl ;
    
    
    
    // Remainder of two numbers. ;
    Remainder = num1 % num2 ;
    cout << "5- The Remainder of " << num1 << " and " << num2 << " is " << Remainder << endl ;  
    
     
     
    cout << " \n \t Date 8 Nov 2023 \n  " ;
    
    
    return 0;
}
