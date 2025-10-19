#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"

void boarddisplay(char tableau[3][3])
{

	printf("\n");
    printf(" %c  | %c | %c\n", tableau[0][0], tableau[0][1], tableau[0][2]);
    printf("**************\n");
    printf(" %c  | %c | %c\n", tableau[1][0], tableau[1][1], tableau[1][2]);
    printf("**************\n");
    printf(" %c  | %c | %c\n", tableau[2][0], tableau[2][1], tableau[2][2]);

}





