#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main(){

    srand( time(NULL) ); //random number generator with the current time (Null)

    int playermove = 0; //what the player picks
    int computermove = 0; //what the computer picks
    bool draw = false; // the draw of the game initally is false (for now)


    do
    {
        //ask player for input
        printf("Select throw:\n\n");
        printf("Rock - 1\n");
        printf("Paper - 2\n");
        printf("Scissors - 3\n\n");
        printf("Selection: ");
        scanf("%d", &playermove);       

        //ask computer for input
        computermove = (rand() % 3) + 1; //"modulus 3" means it will take the remainder of the random number generated, and divided by 3
        //add 1 because any large number divided by 3 will give a remainder of 0, 1 and 2. Add 1 to get options of 1, 2 and 3

        //Cases for when the computer picks each Scenario:
        if(computermove == ROCK)
            printf("The Computer Chose Rock\n");        
        else if(computermove == PAPER)
            printf("The Computer Chose Paper\n");        
        else if(computermove == SCISSORS)
            printf("The Computer Chose Scissors\n");        

        
        draw = false; //Assume for now that there is no draw
        if(playermove == ROCK && computermove == SCISSORS)
            printf("\nYou Win! Rock beats Scissors\n\n");        
        else if(playermove == PAPER && computermove == SCISSORS)
            printf("\nYou lose... Scissors beat Paper\n\n");       
        else if(playermove == ROCK && computermove == PAPER)
            printf("\nYou lose... Paper beats Rock\n\n");      
        else if(playermove == SCISSORS && computermove == PAPER)
            printf("\nYou Win! Scissors beat Paper\n\n");        
        else if(playermove == PAPER && computermove == ROCK)
            printf("\nYou Win! Paper beats Rock\n\n");        
        else if(playermove == SCISSORS && computermove == ROCK)
            printf("\nYou lose... Rock beats Scissors\n\n");  

        else{

            draw = true;

            if(playermove == ROCK)
                printf("You both picked Rock! Thats a Draw!\n\n");
            else if(playermove == PAPER)
                printf("You both picked Paper! Thats a Draw!\n\n");
            else if(playermove == SCISSORS)
                printf("You both picked Scissors! Thats a Draw!\n\n");                       
        }               

    } while (draw); //keep going until the game has a winner
    
    
    getchar();
    return 0;
    

}