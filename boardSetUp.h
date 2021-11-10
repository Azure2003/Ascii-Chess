//
//  boardSetUp.h
//  Chess
//
//  Created by Alex Zhou on 11/4/21.
//

#ifndef boardSetUp_h
#define boardSetUp_h
#include "boardDeclaration.h"
#include "Pawn.h"
void setup(){
    for (int i = 0; i<9; i++) {
        for (int j = 0; j<9; j++) {
            board[i][j]=' ';
        }
    }
    for (int i = 1; i<9; i++) {
        board[0][i]=i+'0';
    }
    for (int i = 1; i<9; i++) {
        board[i][0]=i+'0';
    }
}

#endif /* boardSetUp_h */
