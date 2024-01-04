#include <iostream>
using namespace std ;
int main ()
{

 char board [5] [5] = {  {'.','.','U','.','.'} , {'.','.','B','.','.'} , {'U','B','A','I','D'} , {'.','.','I','.','.'} , {'.','.','D','.','.'} } ;
    
    int currentPlayer = 1 ;
    int choice ;
    int row , column ;
    
    
  
    {
    	
    	cout << "                              " << endl ; 
    	cout << "              " << board [0] [2] << "                                                           " << endl ;
    	cout << "                              " << endl ;
    	cout << "                              " << endl ;
    	cout << "              " << board [1] [2] << "                                                           " << endl ;
    	cout << "                              " << endl ;
    	cout << "                              " << endl ;
    	cout << "  " << board [2] [0] << "     " << board [2] [1] << "     " << board [2] [2] << "     " << board [2] [3] << "     " << board [2] [4] << "   " << endl ;
    	cout << "                              " << endl ; 
    	cout << "                              " << endl ;
    	cout << "              " << board [3] [2] << "                                                           " << endl ;
    	cout << "                              " << endl ; 
    	cout << "                              " << endl ;
    	cout << "              " << board [4] [2] << "                                                           " << endl ;
	} 
	
	cout << "_____________________________ \n" ;

    char boared [5] [5] = {  {'.','.','D','.','.'} , {'.','.','I','.','.'} , {'U','B','A','I','D'} , {'.','.','B','.','.'} , {'.','.','U','.','.'} } ;
    
    int CurrentPlayer = 1 ;
    int choices ;
    int rows , columns ;
    
    
  
    {
    	
    	cout << "                              " << endl ; 
    	cout << "              " << boared [0] [2] << "                                                           " << endl ;
    	cout << "                              " << endl ;
    	cout << "                              " << endl ;
    	cout << "              " << boared [1] [2] << "                                                           " << endl ;
    	cout << "                              " << endl ;
    	cout << "                              " << endl ;
    	cout << "  " << boared [2] [0] << "     " << boared [2] [1] << "     " << boared [2] [2] << "     " << boared [2] [3] << "     " << boared [2] [4] << "   " << endl ;
    	cout << "                              " << endl ; 
    	cout << "                              " << endl ;
    	cout << "              " << boared [3] [2] << "                                                           " << endl ;
    	cout << "                              " << endl ; 
    	cout << "                              " << endl ;
    	cout << "              " << boared [4] [2] << "                                                           " << endl ;
	} 
	cout <<" \n \t    O Y E  S T U P I D  B O Y  \n \t          cs 23 / 303 \n " ;

	return 0 ;
}
