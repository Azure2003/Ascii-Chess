//
//  Knight.h
//  Chess
//
//  Created by Alex Zhou on 11/11/21.
//

#ifndef Knight_h
#define Knight_h
class whiteKnight{
private:
    position knight1;
public:
    int alive=1;
    void setPos(int initialX, int initialY){
        knight1.x=initialX;
        knight1.y=initialY;
    }
    int move(position b){
        if (b.y-knight1.y==-2||b.y-knight1.y==2) {
            if (b.x-knight1.x==1||b.x-knight1.x==-1) {
                if (board[tempydest][tempxdest]==' '){
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'k');
                    return 1;
                }else if (board[tempydest][tempxdest]>=65&&board[tempydest][tempxdest]<=90) {
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'k');
                    return 2;
                }else{
                    return 0;
                }
                
            }else{
                return 0;
            }
        }else if(b.x-knight1.x==-2||b.x-knight1.x==2){
            if (b.y-knight1.y==1||b.y-knight1.y==-1) {
                if (board[tempydest][tempxdest]==' '){
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'k');
                    return 1;
                }else if(board[tempydest][tempxdest]>=65&&board[tempydest][tempxdest]<=90) {
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'k');
                    return 2;
                }else{
                    return 0;
                }
                
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }
    position knightPos(){
        return knight1;
    }
};
class blackKnight{
private:
    position knight1;
public:
    int alive=1;
    void setPos(int initialX, int initialY){
        knight1.x=initialX;
        knight1.y=initialY;
    }
    int move(position b){
        if (b.y-knight1.y==-2||b.y-knight1.y==2) {
            if (b.x-knight1.x==1||b.x-knight1.x==-1) {
                if (board[tempydest][tempxdest]==' '){
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'K');
                    return 1;
                }else if (board[tempydest][tempxdest]>=97&&board[tempydest][tempxdest]<=122) {
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'K');
                    return 2;
                }else{
                    return 0;
                }
                
            }else{
                return 0;
            }
        }else if(b.x-knight1.x==-2||b.x-knight1.x==2){
            if (b.y-knight1.y==1||b.y-knight1.y==-1) {
                if (board[tempydest][tempxdest]==' '){
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'K');
                    return 1;
                }else if (board[tempydest][tempxdest]>=97&&board[tempydest][tempxdest]<=122) {
                    upDateBoard(tempx,tempy, tempxdest, tempydest, 'K');
                    return 2;
                }else{
                    return 0;
                }
                
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }
    position knightPos(){
        return knight1;
    }
};
#endif /* Knight_h */
