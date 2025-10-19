#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"


// Check si il y a un gagnant 

    int win_condition(char symbole, char tableau[3][3]) {
    int i;
    
    
       for (i=0; i<3; i++){
            if (tableau[i][0] == symbole && tableau[i][1] == symbole && tableau[i][2] == symbole)
            return (1); //Pour les rangees

       }
       
       for (i=0; i<3; i++){
            if (tableau[0][i] == symbole && tableau[1][i] == symbole && tableau[2][i] == symbole)
            return (1); //Pour les colonnes

       }
            if (tableau[0][0] == symbole && tableau[1][1] == symbole && tableau[2][2] == symbole)
            return (1);
            
            if (tableau[0][2] == symbole && tableau[1][1] == symbole && tableau[2][0] == symbole)
            return (1);
            
            // Pour les diagonales

        return 0;
    }


