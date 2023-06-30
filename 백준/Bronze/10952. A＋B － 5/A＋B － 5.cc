/**
 * [BRONZE 5] A + B - 5
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(void){
    FASTIO
    int a,b;
    while(1){
        cin >> a >> b ;
        if(a==0 && b==0) break;
        cout << a +b << "\n";
    }
    return 0;
}