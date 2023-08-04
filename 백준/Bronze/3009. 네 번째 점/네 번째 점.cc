/**
 * [BRONZE 3] 네 번째 점
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(void){
    FASTIO
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e>> f;
    int x = a ^ c ^ e ;
    int y = b ^ d ^ f;
    cout << x << " " << y ;
    return 0;
}