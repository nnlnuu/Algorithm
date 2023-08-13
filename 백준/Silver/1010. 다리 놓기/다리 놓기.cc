/**
 * [SILVER 5] 다리 놓기
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long dp[35][35];
int main() {
    FASTIO
    int T, n, r;
    vector<long long> ans;
    for(int i = 0;i<=30;i++){
        for(int j = 0;j<=30;j++){
            if(j==0|| i==j) {
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
    }
    cin >> T;
    while (T--) {
        cin >> r >> n;
        ans.push_back(dp[n][r]);
    }
    vector<long long>::iterator it;
    for(it=ans.begin();it!=ans.end();it++){
        cout << *it <<'\n';
    }
    return 0;
}
