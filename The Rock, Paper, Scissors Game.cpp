#include <iostream> 

#include <stdlib.h> 

#include <ctime> 

  

using namespace std; 

  

int main() 

{ 

    string Player_Name; 

     //game name declaration

      cout << "******************************" << endl;   

	  cout << " Rock , Paper , Scissor Game " << endl; 

	  cout << "******************************" << endl; 
     
     //get player name 
    cout << "Enter Your Name:"; 

    cin >> Player_Name; 

    system("cls"); 
    //rounds variable declaration
    //rounds select option implementation
    int rounds; 

          cout<< Player_Name<< endl <<"How many rounds do you want to play?"; 

           cin >> rounds; 
    
    int Player_Score = 0 , Computer_Score = 0; 

    for(int round = 1; round <=rounds; round++)  // loop for rounds

    { 
        //system declaration
        system("cls"); 

        int Player_Choice, Computer_Choice; 

            cout << "Round NO:"<<round<<"/"<<rounds << endl; 

            cout << Player_Name << " Player_Score ="<< Player_Score; 

            cout << " Computer Score = " << Computer_Score << endl; 

            cout << "1.ROCK"     <<endl; 

            cout << "2.PAPAER"   <<endl; 

            cout << "3.SCISSOR"  <<endl; 

        do 

        { 

            cout <<"Select Your Choice:"; 

            cin >> Player_Choice ; 

        } 

        while(Player_Choice != 1 && Player_Choice != 2 && Player_Choice != 3); 
            //get random computer choice 
            srand(time(0)); 

            Computer_Choice= (rand()%3)+ 1; 
            //game rules declaration

        if(Player_Choice == 1 && Computer_Choice == 3) 

        { 

            cout << "Player Win."<< endl; 

            Player_Score++; 

        } 

        else if (Player_Choice == 2 && Computer_Choice == 1) 

        { 

            cout << "Player Win."<< endl; 

            Player_Score++; 

             

        } 

        else if (Player_Choice == 3 && Computer_Choice == 1) 

        { 

            cout << "Player Win."<< endl; 

            Player_Score++; 

             

        } 

        else if (Player_Choice == Computer_Choice ) 

        { 

            cout << "Draw."<< endl; 

             

        } 

        else 

        { 

            cout << "Computer Win."<< endl; 

            Computer_Score ++; 

        } 

         

    } 

    if(Computer_Score == Player_Score) 

    { 

        cout << "Draw Match"<< endl; 

    } 

    else if(Computer_Score < Player_Score) 

    { 

        cout << Player_Name << " You won the match." << endl; 

     

    } 

    else 

    { 

        cout << "Computer won the match." << endl; 

    } 

    return 0; 

} 
