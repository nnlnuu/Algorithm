/**
 * [SILVER 4] 체스판 다시 칠하기
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
string board[51];
int main(void) {
    FASTIO
    int n,m;
    bool flag = false;
    int b=0,w=0;
    vector<int> ans;
    cin >> n >> m;
    for(int i = 0;i< n;i++){
        cin >> board[i];
    }
    //case 1 부터 합이 짝수 B
    for(int k = 0;k<n-7;k++){
        for(int t = 0;t<m-7;t++){
            for(int i = k;i<k+8;i++){
                for(int j = t;j<t+8;j++){
                    if((i+j)%2==0 && board[i][j]=='W') b++;
                    if((i+j)%2==0 && board[i][j]=='B') w++;
                    if((i+j)%2==1 && board[i][j]=='B') b++;
                    if((i+j)%2==1 && board[i][j]=='W') w++;
                }
            }
//            cout << (k)*t+t+1 << "th b : "<< b << " w : "<<w<<'\n';
            ans.push_back(min(b,w));
            b=0;w=0;
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans[0];
    return 0;
}