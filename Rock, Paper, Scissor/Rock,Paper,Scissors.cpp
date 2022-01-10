#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {

	int user_wins = 0;
	int computer_wins = 0;
	
	int user = 0;
	  
	  //Creating strings to avoid repetition
	  std::string roc = "1)Rock\n";
	  std::string pap = "2)Paper\n";
	  std::string sci = "3)Scissors\n";
	  std::string quit= "4)Quit\n";
	
	std::cout << "Rock, Paper, Scissors Game\n\nSelect your option:" << std::endl;
	
	std::cout << roc;
	std::cout << pap;
	std::cout << sci;
	std::cout << quit;

	while(1){
		std::cout << "\nChoose: ";
		std::cin >> user;
		
		  
		std::cout << "\nYou chose ";
		  
		  //Displaying user choice
		  switch(user){
		    case 1 :
		    	std::cout << roc;
		    	break;
		    case 2 :
		    	std::cout << pap;
		    	break;
		    case 3 :
		    	std::cout << sci;
		    	break;
		     case 4 :
		    	std::cout << quit;
		    	
		    	//Display the score for the game before quitting and announce the winner
		    	std::cout << "\nScore for the game: \n";		
				std::cout << "Your Score : " << user_wins;
				std::cout << "\nComputer's Score : " << computer_wins;
				
				if(user_wins==computer_wins)
				 	std::cout << "\n\nDraw Game!!! YAYY!\n";
				else if(user_wins>computer_wins)
				 	std::cout << "\n\nYou won!! Congrats!!\n";
				else
				 	std::cout << "\n\nYou lost. Sorry :') You could play another round though! ;)\n";
				std::cout << "\nThanks for playing!!! Enjoy your day :) ";
		    	exit(0);
		    default :
		    	std::cout << "Invalid Option\n";
		  }
		  
	  //Displaying computer choice
		std::cout << "Computer chose ";
		srand(time(NULL));
		int computer = rand() % 3+1;
		
		    switch(computer){
		    case 1 :
		    	std::cout << roc;
		    	break;
		    case 2 :
		    	std::cout << pap;
		    	break;
		    case 3 :
		    	std::cout << sci;
		    	break;
		    default :
		    	std::cout << "Invalid Option\n";
		  }
	  
	  
		  //Win Lose Draw Logic
		  if(user == computer){
		    std::cout << "Draw Game\n";
		  }
		  else if(user == 1 && computer == 3){
		    std::cout << "You Win\n";
		    user_wins+=1;
		  }
		  else if(user == 3 && computer == 2){
		    std::cout << "You Win\n";
		    user_wins+=1;
		  }
		  else if(user == 2 && computer == 1){
		    std::cout << "You Win\n";
		    user_wins+=1;
		  }
		  else{
		    std::cout << "Computer Wins!\n";
		    computer_wins+=1;
	  }
	  
	}
	
}