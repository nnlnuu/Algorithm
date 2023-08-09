/**
 * [SILVER 3] 2xn 타일링 2
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long dp[1004];
int main(void){
    FASTIO
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 3;
    for(int i =3 ;i<=n;i++){
        dp[i]= dp[i-1]+ dp[i-2]*2;
        dp[i]%=10007;
    }
    cout << dp[n]%10007;
    return 0;
}