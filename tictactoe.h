#ifndef __TIC_TAC_TOE_H
#define _TIC_TAC_TOE_H


void initialise(char tableau[3][3]);

void boarddisplay(char tableau[3][3]);

void computer_plays(char tableau[3][3]);

int win_condition(char symbole, char tableau[3][3]);

void player_plays(char tableau[3][3]);

int draw(char tableau[3][3]);

int number_attribuation(int number, char symbole, char tableau[3][3]);

#endif