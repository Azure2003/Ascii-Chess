//
//  printBoard.h
//  Chess
//
//  Created by Alex Zhou on 11/4/21.
//

#ifndef printBoard_h
#define printBoard_h
#include "boardDeclaration.h"
using namespace std;
void printBoard(){
    for (int i = 0; i<9; i++) {
        for (int j = 0; j<9; j++) {
            cout<<board[i][j]<<'|';
        }
        cout<<endl;
        if (i!=8) {
            cout<<"------------------"<<endl;
        }
    }
}

#endif /* printBoard_h */
