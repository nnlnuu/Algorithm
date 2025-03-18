/**
 * [BRONZE 3] 아카라카 2
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0)

int main(void){
    FASTIO;
    int n;
    cin >> n;

    string aka = "AKA";
    string r = "R";

    string ans = "AKA";
    for (int i = 0;i<n;i++){
        ans += r;
        ans += aka;
    }
    cout << ans;

    return 0;
}