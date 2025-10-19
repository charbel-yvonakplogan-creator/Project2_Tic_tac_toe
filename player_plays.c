#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"

//Faire en sorte que le joueur joue 

void player_plays(char tableau[3][3]) {
char player = 'X' ; 
int number;   
int yes = 0;
    do {
        printf("Choisissez où jouer: \n");
    scanf("%d", &number);
     yes = number_attribuation(number, player, tableau);
    }
    while (!yes);
}
