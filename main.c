#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"


int main(){
system("clear");    
srand(time(NULL));  
char tableau[3][3];

//On initialise le tableau
initialise(tableau);

char computer = 'O' ;
char player = 'X' ;
char empty = ' ';


printf("\n"); 
printf("--------Jeu du Tic-Tac-Toe------\n");

// On affiche le tableau 
boarddisplay(tableau);    
    
 while (1) {
player_plays(tableau);
boarddisplay(tableau);
if (win_condition(player, tableau)) {
    printf("C'est gagné ! \n");
    exit(0);
}

    computer_plays(tableau);
    boarddisplay(tableau);
    if (win_condition(computer, tableau))  {
        printf("C'est perdu !\n");
        exit(0);
    }
}

if (draw(tableau)) {
    printf("C'est un match nul !\n");
    exit(0);
}



return(0);

}













