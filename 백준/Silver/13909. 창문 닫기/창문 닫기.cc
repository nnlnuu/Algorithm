/**
 * [SILVER 5] 창문 닫기
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long n;
int main(){
    FASTIO;

    cin >> n;

    int sum=0;
    for(int i =1;i*i<=n;i++){
        sum++;
    }
    cout << sum;
    return 0;
}