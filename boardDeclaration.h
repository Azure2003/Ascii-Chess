//
//  boardDeclaration.h
//  Chess
//
//  Created by Alex Zhou on 11/4/21.
//

#ifndef boardDeclaration_h
#define boardDeclaration_h
char board[9][9];
int tempx;
int tempy;
int tempxdest;
int tempydest;


void upDateBoard(int curx, int cury, int desx, int desy, char piece){
    board[cury][curx]=' ';
    board[desy][desx]=piece;
}
#endif /* boardDeclaration_h */
