#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"

int draw(char tableau[3][3]) {
int i;
int j;

for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++)
                if(tableau[i][j] == ' ')
                return 0;
}        
            //En cas de match nul, on verifie si la grille est pleine

            return 1;
}            