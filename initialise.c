#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"


void initialise(char tableau[3][3]) {
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
        tableau[i][j] = ' ';

}