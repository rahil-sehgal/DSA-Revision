#include <iostream>

using namespace std;
bool isSafe(int board [][10],int i,int j,int n){
    //You can check for the col
    for (int row = 0; row < i; row++)
    {
        if(board[row][j]==1){
            return false;
        }
    }
    
    //check for left diagonal
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;y--;
    }
    //check for right diagonal
    x=i;
     y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;y++;
    }

    //The postion is now safe 
    return true;
}




bool solveNQueen(int board[][10],int i,int n){
    //Base Case
    if(i==n){
        //You have successfully place queen in n rows {0,1,2,...n-1}
        //Print the board 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){cout<<"Q";}
                else cout<<" _ ";
            }
            cout<<endl;
       }
       cout<<endl;
      //  return true;
       cout<<endl<<endl;
      return false; //so as to print all the configurations 
      
    }


    //Recursive case //assumtion that aage ki rows fill ho jayegi
    //try to place the queen in the current row and call on the remaining part 
    for(int j=0;j<n;j++){
        //check if (i,j) is safe to place the queen or not
        if(isSafe(board,i,j,n)){
            //Place the queen assumng i,j is the right position
            board[i][j]=1;

            //next row i+1
            bool nextQueenRakhPaye =solveNQueen(board,i+1,n) ;
            if (nextQueenRakhPaye)
            {
                return true;
            }

            //Means assumption is wrong 
            board[i][j]=0; //Backtrack
            
        }
    }
    //You have tried for all positions in the current row but could not place the queen 
    return false;


}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int board[10][10] ={0};
    solveNQueen(board,0,n);
}