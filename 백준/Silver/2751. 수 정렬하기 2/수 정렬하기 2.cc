/**
 * [SILVER 5] 수 정렬하기
 * @writer : nnlnuu
 * */
#include<bits/stdc++.h>

using namespace std;
int nArr[1000001] = {0,};
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(void){
    FASTIO
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> nArr[i];
    }
    sort(nArr,nArr+n);
    for(int i = 0;i<n;i++){
        cout << nArr[i]<<'\n';
    }
    return 0;
}