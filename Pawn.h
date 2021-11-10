//
//  Pawn.h
//  Chess
//
//  Created by Alex Zhou on 11/1/21.
//

#ifndef Pawn_h
#define Pawn_h
#include "PosStruct.h"
#include "boardDeclaration.h"
class WhitePawn{
private:
    position pawn1;
public:
    int alive=1;
    bool initialMove=false;
    void setPos(int initialX, int initialY){
        pawn1.x=initialX;
        pawn1.y=initialY;
    }
    int move(position b){
        if (b.x==pawn1.x&&b.y-pawn1.y==-2&&initialMove==false) {
            if (board[tempydest][tempxdest]==' '&&board[tempydest+1][tempxdest]==' ') {
                pawn1.x=tempxdest;
                pawn1.y=tempydest;
                upDateBoard(tempx,tempy, tempxdest, tempydest, 'p');
                initialMove=true;
                return 1;
            }else{
                return 0;
            }
        }else{
            if ((b.x-pawn1.x==1||b.x-pawn1.x==-1)&&b.y-pawn1.y==-1) {
                if (board[tempydest][tempxdest]>=65&&board[tempydest][tempxdest]<=90) {
                    pawn1.x=tempxdest;
                    pawn1.y=tempydest;
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'p');
                    initialMove=true;
                    return 2;
                }else{
                    return 0;
                }
            }else{
                if (b.x==pawn1.x&&b.y-pawn1.y==-1) {
                    if (board[tempydest][tempxdest]==' ') {
                        pawn1.x=tempxdest;
                        pawn1.y=tempydest;
                        upDateBoard(tempx,tempy, tempxdest, tempydest, 'p');
                        initialMove=true;
                        return 1;
                    }else{
                        return 0;
                    }
                }else{
                    return -1;
                }
            }
        }
    }
    position pawnPos(){
        return pawn1;
    }
};
class BlackPawn{
private:
    position pawn1;
public:
    int alive=1;
    bool initialMove=false;
    void setPos(int initialX, int initialY){
        pawn1.x=initialX;
        pawn1.y=initialY;
    }
    int move(position b){
        if (b.x==pawn1.x&&b.y-pawn1.y==2&&initialMove==false) {
            if (board[tempydest][tempxdest]==' '&&board[tempydest-1][tempxdest]==' ') {
                pawn1.x=tempxdest;
                pawn1.y=tempydest;
                upDateBoard(tempx,tempy, tempxdest, tempydest, 'P');
                initialMove=true;
                return 1;
            }else{
                return 0;
            }
        }else{
            if ((b.x-pawn1.x==1||b.x-pawn1.x==-1)&&b.y-pawn1.y==1) {
                if (board[tempydest][tempxdest]>=97&&board[tempydest][tempxdest]<=122) {
                    pawn1.x=tempxdest;
                    pawn1.y=tempydest;
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'P');
                    initialMove=true;
                    return 2;
                }else{
                    return 0;
                }
            }else{
                if (b.x==pawn1.x&&b.y-pawn1.y==1) {
                    if (board[tempydest][tempxdest]==' ') {
                        pawn1.x=tempxdest;
                        pawn1.y=tempydest;
                        upDateBoard(tempx,tempy, tempxdest, tempydest, 'P');
                        initialMove=true;
                        return 1;
                    }else{
                        return 0;
                    }
                }else{
                    return -1;
                }
            }
        }
    }
    position pawnPos(){
        return pawn1;
    }
};
#endif /* Pawn_h */
