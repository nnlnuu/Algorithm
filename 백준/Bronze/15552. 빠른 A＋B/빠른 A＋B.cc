/**
 * [BRONZE 4] 빠른 A + B
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0)
int main(){
    FASTIO;
    int T;
    cin >> T;
    int a,b;
    long long sum;
    while(T--){
        cin >> a >> b;
        sum = a + b;
        cout << sum << '\n';
    }


    return 0;
}