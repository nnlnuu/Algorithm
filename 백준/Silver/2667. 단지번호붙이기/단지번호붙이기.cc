/**
 * [SILVER 1] 단지 번호 붙이기
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
#define X first
#define Y second
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int visited[26][26];

int main(void){
    FASTIO
    int n,cnt=0;
    string board[27];
    vector<int> ans;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> board[i];
    }
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(board[i][j]=='0'|| visited[i][j])
                continue;
            queue < pair<int,int> > q;
            visited[i][j]= 1;
            q.push(make_pair(i,j));
            int width = 1;
            cnt++;
            while(!q.empty()){
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir = 0;dir<4;dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >=n)
                        continue;
                    if (board[nx][ny] == '0' || visited[nx][ny] == 1)
                        continue;
                    q.push(make_pair(nx,ny));
                    visited[nx][ny] = 1;
                    width++;
                }
            }
        ans.push_back(width);
        }
    }
    cout << cnt<<'\n';
    sort(ans.begin(),ans.end());
    vector<int> ::iterator it = ans.begin();
    for(;it!=ans.end();it++){
        cout << *it<<'\n';
    }
    return 0;
}