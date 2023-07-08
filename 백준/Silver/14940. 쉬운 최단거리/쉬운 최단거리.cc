/**
* @writer : nnlnuu
* [SILVER 1] 미로 탐색
*/
#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int arr[100][100];
int dist[1000][1000];
string board[1000][1000];
bool visited[1000][1000] = {0,};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);

int main(void){
    FASTIO
    int n,m;
    cin >> n >> m;
    pair<int,int> temp;
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            cin >> board[i][j];
            if(board[i][j]=="2") temp = make_pair(i,j);
        }
    }
    queue<pair<int,int> > q;
//    cout <<"start position is "<<temp.X <<","<<temp.Y<<endl;
    dist[temp.X][temp.Y] = 0;
    q.push(temp);
    while(!q.empty()){
        pair<int,int> cur = q.front();q.pop();
        for(int dir = 0;dir<4;dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx>= n || ny < 0 || ny >= m || visited[nx][ny]) continue;
            if(board[nx][ny]=="0") continue;
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            visited[nx][ny] = true;
            q.push(make_pair(nx,ny));
        }
    }
//    cout << "ans\n";
    dist[temp.X][temp.Y] = 0;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(board[i][j]=="1" && dist[i][j]==0)
                dist[i][j] = -1;
        }
    }

    for(int i =0;i<n;i++){
        for(int j = 0 ; j<m;j++){
            cout << dist[i][j] <<' ';
        }cout<<'\n';
    }
    return 0;
}