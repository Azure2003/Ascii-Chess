//
//  castle.h
//  Chess
//
//  Created by Alex Zhou on 11/6/21.
//

#ifndef castle_h
#define castle_h
#include "PosStruct.h"
#include "boardDeclaration.h"
class WhiteCastle{
private:
    position castle1;
public:
    int alive=1;
    void setPos(int initialX, int initialY){
        castle1.x=initialX;
        castle1.y=initialY;
    }
    int move(position b){
        if (castle1.x==b.x) {
            int largerNum;
            int smallerNum;
            if (castle1.y>b.y) {
                largerNum=castle1.y-1;
                smallerNum=b.y;
            }else{
                largerNum=b.y;
                smallerNum=castle1.y+1;
            }
            int flag=0;
            for (int i = smallerNum; i<largerNum; i++) {
                if (board[i][tempxdest]!=' ') {
                    flag=1;
                }
            }
            if (flag==0) {
                if (board[tempydest][tempxdest]==' ') {
                    castle1.y=tempydest;
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'c');
                    return 1;
                }else {
                    if (board[tempydest][tempxdest]<=90&&board[tempydest][tempxdest]>=65) {
                        castle1.y=tempydest;
                        upDateBoard(tempx,tempy, tempxdest, tempydest, 'c');
                        return 2;
                    }else{
                        return 0;
                    }
                }
            }else{
                return 0;
            }
        }else if(castle1.y==b.y){
                int largerNum;
                int smallerNum;
                if (castle1.x>b.x) {
                    largerNum=castle1.x-1;
                    smallerNum=b.x;
                }else{
                    largerNum=b.x;
                    smallerNum=castle1.x+1;
                }
                int flag=0;
                for (int i = smallerNum; i<largerNum; i++) {
                    if (board[tempydest][i]!=' ') {
                        flag=1;
                    }
                }
                if (flag==0) {
                    if (board[tempydest][tempxdest]==' ') {
                        castle1.x=tempxdest;
                        upDateBoard(tempx,tempy, tempxdest, tempydest, 'c');
                        return 1;
                    }else {
                        if (board[tempydest][tempxdest]<=90&&board[tempydest][tempxdest]>=65) {
                            castle1.x=tempxdest;
                            upDateBoard(tempx,tempy, tempxdest, tempydest, 'c');
                            return 2;
                        }else{
                            return 0;
                        }
                    }
                }else{
                    return 0;
                }
            }else {
            return 0;
        }
    }
    position castlePos(){
        return castle1;
    }
};
class BlackCastle{
private:
    position castle1;
public:
    int alive=1;
    void setPos(int initialX, int initialY){
        castle1.x=initialX;
        castle1.y=initialY;
    }
    int move(position b){
        if (castle1.x==b.x) {
            int largerNum;
            int smallerNum;
            if (castle1.y>b.y) {
                largerNum=castle1.y-1;
                smallerNum=b.y;
            }else{
                largerNum=b.y;
                smallerNum=castle1.y+1;
            }
            int flag=0;
            for (int i = smallerNum; i<largerNum; i++) {
                if (board[i][tempxdest]!=' ') {
                    flag=1;
                }
            }
            if (flag==0) {
                if (board[tempydest][tempxdest]==' ') {
                    castle1.y=tempydest;
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'C');
                    return 1;
                }else {
                    if (board[tempydest][tempxdest]<=122&&board[tempydest][tempxdest]>=97) {
                        castle1.y=tempydest;
                        upDateBoard(tempx,tempy, tempxdest, tempydest, 'C');
                        return 2;
                    }else{
                        return 0;
                    }
                }
            }else{
                return 0;
            }
        }else if(castle1.y==b.y){
                int largerNum;
                int smallerNum;
                if (castle1.x>b.x) {
                    largerNum=castle1.x-1;
                    smallerNum=b.x;
                }else{
                    largerNum=b.x;
                    smallerNum=castle1.x+1;
                }
                int flag=0;
                for (int i = smallerNum; i<largerNum; i++) {
                    if (board[tempydest][i]!=' ') {
                        flag=1;
                    }
                }
                if (flag==0) {
                    if (board[tempydest][tempxdest]==' ') {
                        castle1.x=tempxdest;
                        upDateBoard(tempx,tempy, tempxdest, tempydest, 'C');
                        return 1;
                    }else {
                        if (board[tempydest][tempxdest]<=122&&board[tempydest][tempxdest]>=97) {
                            castle1.x=tempxdest;
                            upDateBoard(tempx,tempy, tempxdest, tempydest, 'C');
                            return 2;
                        }else{
                            return 0;
                        }
                    }
                }else{
                    return 0;
                }
            }else {
            return 0;
        }
    }
    position castlePos(){
        return castle1;
    }
};
#endif /* knight_h */
