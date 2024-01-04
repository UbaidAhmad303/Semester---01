#include<iostream>
using namespace std ;
int main ()
{
	int IslamicStudy , FundamentalPrograming , ICT , English , Civics , Entreprenevrship ;
	float Average ;
//	start:
    cout << " \t PLEASE READ CAREFULLY.THANKS. " << endl ;
    cout << " \t \t N O T E \n 1.The Marks Must be from 0 to 100 in all subjects. " <<endl ;
    cout << " 2.Each subject has 100 marks & The Total subjects is six. " <<endl ;
    cout << " 3. Otherwise The Calculation will be Wrong! & we will not be responsible for it ! \n " << endl ;

	cout << " 1st: Please enter the obtainted marks in Islamic Study. \n " ;
	cin >> IslamicStudy ;
	
	cout << " 2nd: Please enter the obtainted marks in Fundamental Programing. \n " ;
	cin >> FundamentalPrograming ;
	
	cout << " 3rd: Please enter the obtainted marks in ICT. \n " ;
	cin >> ICT ;
	
	cout << " 4th: Please enter the obtainted marks in English. \n " ;
	cin >> English ;
	
	cout << " 5th: Please enter the obtainted marks in Civics. \n " ;
	cin >> Civics ;
	
	cout << " 6th: Please enter the obtainted marks in Entreprenevrship. \n " ;
	cin >> Entreprenevrship ;
	 
	Average = IslamicStudy + FundamentalPrograming + ICT + English + Civics + Entreprenevrship ;
    Average = Average * 100 / 600 ;
    cout << " Your average is "<< Average <<endl ;
    
    	if ( Average < 101 && Average > 94 ){   //from 95 to 100 grade is A1.
		cout << " GRADE  A1. \n ' O U T S T A N D I N G' " ;
    	}else{
		if ( Average < 95 && Average > 84){ // from 85 to 94 grade is A.
		cout << " GRADE  A. \n ' E X C E L L E N T ' " ;
		}else{
		if ( Average < 85 && Average > 74 ){ //from 75 to 84 grade is B.
		cout << " GRADE  B. ' G O O D  \n ' I think You needs Improvement. " ;
		}else{
		if ( Average < 75 && Average > 64 ){ //from 65 to 74 grade is C.
		cout << " GRADE  C. 'F A I R ! \n ' Minimum pass marks.\n You needs Improvement Must. " ;
		}else{
		if ( Average < 65 && Average > 0 ){ //from 0 to 64 grade is D.
		cout << " GRADE  D. \n ' S O R R Y  Y O U  A R E  F A I L ! ' \n REAPPEAR WITH HARDWORK. " << endl ;
		}
		}
		}
		}
	}

//	goto start ;
	return 0 ;
}
