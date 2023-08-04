/**
 * [SILVER 2] 잃어버린 괄호
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
/**
 * 시간초과
 * */
//int factorial(int n){
//    if(n==1) return 1;
//    return factorial(n-1) * n;
//}
//
//int main(void){
//    FASTIO
//    int n,k;
//    cin >> n >> k;
//    cout << factorial(n)/(factorial(n-k)* factorial(k));
//}
long long dp[11];
int main(void){
    FASTIO

    dp[0]= 1;
    dp[1] = 1;

    for(int i = 2;i<=10;i++){
        dp[i] = dp[i-1]*i;
    }
    int n,k;
    cin >> n >> k;
    cout << dp[n]/(dp[n-k]*dp[k]);
    return 0;
}