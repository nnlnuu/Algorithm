/**
 * [BRONZE 4] 10!
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long ans = 1;
int main(void){
    int n;
    cin >> n;
    for(int i =1 ;i<=n;i++){
        ans*=i;
    }
    ans=ans/(7*24*60*60);
    cout << ans;
    return 0;
}