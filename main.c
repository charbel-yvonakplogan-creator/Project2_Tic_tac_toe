#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"

int main(){

char computer = 'O' ;
char player = 'X' ;
char empty = ' ';

system("clear");

    printf("\n"); 
    printf("--------Jeu du Tic-Tac-Toe------\n");
int number;
    printf("Choisissez où jouer: \n");
    if (number>=9){
        printf("Veuillez inscrire un numéro de grille valide");
        return 1;
    }
    scanf(%d, &number);

//Créer la grille de jeu et l'initialiser avec des espaces vides

char tableau [3][3];
int columns; 
int rows;
       
    for(columns=0; columns<3; columns++) 
         
	for(rows=0; rows<3; rows++) {
        tableau[columns][rows]= '   '; //Initilisation du tableau avec des espaces vides

    }
printf("\n"); 

//Attribuer les colonnes et les rangees à des int
number_attribuation()

// On affiche le tableau 
boarddisplay(char tableau [3][3]);

//Faire en sorte que l'ordinateur remplisse la premiere case disponible
computer_plays()

//Faire en sorte que le joueur joue 
player_plays()

// Check si il y a un gagnant 
win_condition()











exit(0);

}