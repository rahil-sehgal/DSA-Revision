#include<iostream>

using namespace std;

bool isRowSafe(int board[][4],int row,int col,int num){
    for(int j=0;j<4;j++){
        if(board[row][j]==num){
            return false;
        }
    }
    return true;
}
bool isColumnSafe(int board[][4],int row,int col,int num){
    for(int i=0;i<4;i++){
        if(board[i][col]==num){
            return false;
        }
    }
    return true;
}
bool isBoxSafe(int board[][4],int row,int col,int num){
    //if n x n then row start = row -row %(sqrt(n))
    //if 9 x 9 then row start =row -row %(3)

    int rowstart =row -row%2;
    int colstart =col-col%2;

    for(int i=rowstart;i<rowstart+2;i++){
        for(int j=colstart;j<colstart +2;j++){
            if(board[i][j]==num){
                return false;
            }
        }
    }
    return true;
}

bool canPlaceNum(int board[][4],int row,int col, int num){
 if(!isRowSafe(board,row,col,num)){
     return false;
 }
 if(!isColumnSafe(board,row,col,num)){
     return false;
 }
 if(!isBoxSafe(board,row,col,num)){
     return false;
 }
 return true;
}

bool sodukoSolver(int board[][4] ){

    //to find the empty cell intitally 
    //imiatially nhi pata so -1
    int row =-1;
    int col=-1;

    bool isEmpty =false;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;){
            if(board[i][j]==0){
                isEmpty=true;
                row =i;
                col=j;
                break;
            }
        }
        if(isEmpty){
            break;
        }
    }
    if(!isEmpty){
        return true;
    }

    for(int num=1;num<=4;num++){
            if(canPlaceNum(board, row,col, num)){
                board[row][col]=num;
                if(sodukoSolver(board)){
                    return true;
                }
                board[row][col]=0;
            }
    }

return false;
}


int main(){
    int board[4][4]={{1,3,0,4},{2,0,3,1},{0,1,0,2},{4,0,1,0}};
    cout<<sodukoSolver(board)<<endl;
    for(int i=0;i<4;i++){
        fot(int j=0;j<4;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
 cout<<endl;
}