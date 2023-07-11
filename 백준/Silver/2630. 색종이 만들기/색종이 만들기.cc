/**
 * [SILVER 2] 색종이 만들기
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int board[128][128] = {0,};
int wcnt=0,bcnt = 0;
int func(int n,int x, int y){
    int flag = 1,temp;
    if(n == 1) {
        if(board[x][y]==0) wcnt++;
        else bcnt++;
        return -1;
    }
    temp = board[x][y];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(board[x+i][y+j]==temp) continue;
            flag = -1;
            break;
        }
        if(flag == -1) break;
    }

    if(flag != -1) {
//        cout << "In ("<<x<<", "<<y<<") case "<<"flag is "<<flag << " and fill with "<<temp<<"\n";
        if(temp==1) {
            bcnt++;
            return 0;
        }
        else if(temp==0){
            wcnt++;
            return 1;
        }
    }
    func(n/2,x,y);
    func(n/2,x,y+n/2);
    func(n/2,x+n/2,y);
    func(n/2,x+n/2,y+n/2);
    return 0;
}
int main(void){
    FASTIO
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cin >> board[i][j];
        }
    }

    func(n,0,0);
//    cout <<"white_num : " << wcnt<<'\n';
//    cout << "blue_num : "<<bcnt;
    cout << wcnt<<'\n';
    cout <<bcnt;
    return 0;
}