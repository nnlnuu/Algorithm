/**
 * [GOLD 5] 1학년
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long dp[101][101];
long long num[101];
long long ans;

int n,cnt=0;
int main(void){
    FASTIO
    cin >> n;
    for (int i = 0; i < n; i++) cin >> num[i];

    dp[0][num[0]] = 1;
    for (int i = 1; i < n-1; i++) {
        for (int j = 0; j <=20 ; j++) {
            if(0<=j+num[i]&& j+num[i]<=20)
                dp[i][j]+=dp[i-1][j+num[i]];
            if(0<=j-num[i]&& j-num[i]<=20)
                dp[i][j]+=dp[i-1][j-num[i]];
        }
    }
    cout<<dp[n-2][num[n-1]];
    return 0;
}