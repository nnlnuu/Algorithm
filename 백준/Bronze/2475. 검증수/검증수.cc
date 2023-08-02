/**
 * [BRONZE 5] 검증수
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int input[6];
int main(void){
    FASTIO
    int sum=0,ans;
    string str;
    for(int i = 0;i<5;i++){
        cin >> input[i];
    }
    for(int i =0;i<5;i++){
        sum+= (input[i]*input[i]);
    }
    ans = sum % 10;
    cout << ans;
    return 0;
}