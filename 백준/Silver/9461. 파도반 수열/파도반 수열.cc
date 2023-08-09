/**
 * [SILVER 3] 파도반 수열
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
long long tree[1000001] = {0,};
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long dp[104];
int main(void) {
    FASTIO
    int T,n;
    cin >> T;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    for(int i = 5;i<=100;i++){
        dp[i] = dp[i-2] + dp[i-3];
    }
    while(T--){
        cin >> n;
        cout << dp[n] <<'\n';
    }
    return 0;
}