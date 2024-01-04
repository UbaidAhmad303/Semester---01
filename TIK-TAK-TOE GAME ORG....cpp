#include <iostream>
using namespace std ;

    char board [3] [3] = {  {'1','2','3'} , {'4','5','6'} , {'7','8','9'}  } ;
    
    int currentPlayer = 1 ;
    int choice ;
    int row , column ;
    
    void drawBoard ()
  
    {
    	
    	cout << "     |     |     " << endl ; 
    	cout << "  " << board [0] [0] << "  |  " << board [0] [1] << "  |  " << board [0] [2] << "   " << endl ;
    	cout << "_____|_____|_____" << endl ;
    	cout << "     |     |     " << endl ;
    	cout << "  " << board [1] [0] << "  |  " << board [1] [1] << "  |  " << board [1] [2] << "   " << endl ;
    	cout << "_____|_____|_____" << endl ;
    	cout << "     |     |     " << endl ;
    	cout << "  " << board [2] [0] << "  |  " << board [2] [1] << "  |  " << board [2] [2] << "   " << endl ;
    	cout << "     |     |     " << endl ; 
    	
	} 
	
	
	void playerTurn ()
	
	{
	
     	if ( currentPlayer == 1 )
     	cout << " Player 1st turn (X) : " ;
      	else
     	cout << " Player 2nd turn (O) : " ;
    	cin >> choice ;
    	
    	switch (choice)
    	{
    		case 1 : row = 0 ; column = 0 ; break ;
    		case 2 : row = 0 ; column = 1 ; break ;
    		case 3 : row = 0 ; column = 2 ; break ;
    		case 4 : row = 1 ; column = 0 ; break ;
    		case 5 : row = 1 ; column = 1 ; break ;
    		case 6 : row = 1 ; column = 2 ; break ;
    		case 7 : row = 2 ; column = 0 ; break ;
    		case 8 : row = 2 ; column = 1 ; break ;
    		case 9 : row = 2 ; column = 2 ; break ;
    		default :
    			cout << " Invaild move. \n Please TRY AGAIN ! " << endl ;
    			playerTurn () ;
		}
		
		if ( currentPlayer == 1 )
		board [row] [column] = 'X' ;
		else
		board [row] [column] = 'O' ;
		drawBoard () ;
	}
	
	bool gameover ()
	
	{
		for ( int i = 0 ; i < 3 ; i++  ) {
		if ( board [i] [0] == board [i] [1] && board [i] [1] == board [i] [2] )
		return true ;
		if ( board [0] [i] == board [1] [i] && board [1] [i] == board [2] [i] )
		return true ;
		}
		
		if ( board [0] [0] == board [1] [1] && board [1] [1] == board [2] [2] )
		return true ;
		if ( board [0] [2] == board [1] [1] && board [1] [1] == board [2] [0] )
		return true ;
		
		bool isDraw = true ;
		for ( int i = 0 ; i < 3 ; i ++ ) {
			for ( int j = 0 ; j < 3 ; j ++ ) {
				if ( board [i] [j] != 'X' && board [i] [j] != 'O' ) {
					isDraw = false ;
					break;
				}
			}
		}
		
		return isDraw ;
	}
	
	
	int main ()
	
	{
		cout << " __Tik-Tak-Toe Game__ " << endl ;
		drawBoard () ;
		
		while ( ! gameover () ) {
			playerTurn () ;
			currentPlayer = ( currentPlayer % 2 ) + 1 ;
		}
		
		if ( currentPlayer == 1 )
		     currentPlayer = 2 ;
		else
		currentPlayer = 1 ;
		
		if ( gameover () && currentPlayer == 1)
		cout << " 1st Player wins! " << endl ;
		else if ( gameover () && currentPlayer == 2 )
		cout << " 2nd Player wins! " << endl ;
		else
		cout << " The Game Is Draw!! " << endl ;
		
		return 0 ;
	}
	
	

