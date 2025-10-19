#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"



//Faire en sorte que l'ordinateur remplisse la premiere case disponible


void computer_plays(char tableau[3][3]) {
    int rows;
    int columns;

    for (rows = 0; rows<3; rows++) {

    for (columns = 0; columns<3; columns++) {
        if (tableau[rows][columns] == ' ') {
            tableau[rows][columns] = 'O';
            return;
        }

    }


}

}