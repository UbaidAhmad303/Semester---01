#include <iostream>
using namespace std ;
int main ()
{
	//TAKING THE NUMBER OF STUDENTS .
	int Total_students ;
	cout << " Please enter the number of students. " <<endl ;
	cin >> Total_students ;
	cout << "-------------------------------------" <<endl ;
	
	//RECIVING THE MARKS FROM STUDENTS .
	int Marks[ Total_students ] ;
	for ( int U = 0 ; U < Total_students ; U ++ ){
		cout << " Please enter the marks of student. " <<endl ;
		cin >> Marks[ U ] ;
    }
	cout << "-------------------------------------" <<endl ;
	
	//SUMITION (ADDITION) OF ALL MARKS .
	int Sum_of_marks = 0 ;
	for ( int U = 0 ; U < Total_students ; U ++ ){
		Sum_of_marks = Sum_of_marks + Marks[ U ] ;
	}
	cout << " 1st: Sum of all marks is " <<Sum_of_marks<< "." <<endl ;
	
	//FINDING THE AVERAGE .
	float Average = Sum_of_marks / Total_students ;
	cout << " 2nd: The Average is " <<Average<< "." ; 

    	return 0 ;
}
