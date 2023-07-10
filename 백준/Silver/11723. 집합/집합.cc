/**
 * [SILVER 5] 집합
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define full 0b111111111111111111111
#define emt 0b000000000000000000000
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long cur=0;
int main(void){
    long long m;
    int n;
    FASTIO
    cin >> m;
    string cmd;
    while(m--){
        cin >> cmd;
        if(cmd =="add") {
            cin >> n;
            cur = cur | (1 << n);
        }
        else if(cmd == "remove") {
            cin >> n;
            cur = cur & ~(1<<n);
        }
        else if(cmd == "check") {
            cin >> n;
            cout << (cur >> n)%2<<'\n' ;
        }
        else if(cmd == "toggle") {
            cin >> n;
            cur = cur ^ (1<< n);
        }
        else if(cmd == "all") {
            cur = full | cur;
        }
        else {
            cur = emt & cur;
        }
    }
    return 0;
}