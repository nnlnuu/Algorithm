/**
 * [SILVER 3] 이친수
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
long long dp[100];
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int n;
int main(void){
    FASTIO
    cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout << dp[n];

    return 0;
}