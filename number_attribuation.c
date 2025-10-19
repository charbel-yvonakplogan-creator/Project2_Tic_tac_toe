#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"

//Attribuer les colonnes et les rangees à des int

int number_attribuation(int number, char symbole, char tableau[3][3]) {

char computer = 'O' ;
char player = 'X' ;
char empty = ' ';


    if (number <0 || number >8) {
        printf("Veuillez inscrire un numero de case valide : \n");
        return (0);
    }

    int rows = number/3;
    int columns = number %3;

    if (tableau[rows][columns] != ' ') {
        printf("La case est deja occupee\n");
        return(0);
    }

    tableau[rows][columns] = symbole;
    return(1);
}