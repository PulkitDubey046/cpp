// 2 direction right or down can be taken to reach the destination
// Find the total number of ways to reach from top-left to bottom-right of a maze

#include <iostream>
using namespace std;
int mazePath(int sr, int sc, int dr, int dc){
    //base case
    if(sr==dr && sc==dc) return 1;
    if(sr>dr || sc>dc) return 0;
    //recursive case
    return mazePath(sr+1, sc, dr, dc) + mazePath(sr, sc+1, dr, dc);
}

int maze2(int row, int col){
    if(row==1 && col==1) return 1;
    if(row<1 || col<1) return 0;
    return maze2(row-1, col) + maze2(row, col-1);
}
int main(){
    cout<<mazePath(0, 0, 2, 2)<<endl;
    cout<<maze2(3, 3);
}