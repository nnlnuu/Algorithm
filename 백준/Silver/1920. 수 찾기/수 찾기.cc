/**
 * [SILVER 4] 수 찾기
 * @writer : nnlnuu
 * */
#include<bits/stdc++.h>

using namespace std;
int nArr[1000001] = {0,};
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(void){
    FASTIO
    int n,m,temp;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> temp;
        nArr[i] = temp;
    }
    sort(nArr,nArr+n);
    cin >> m;

    for(int i = 0;i<m;i++){
        cin >> temp;
        if(binary_search(nArr,nArr+n,temp)) cout << '1'<<"\n";
        else cout << '0' << "\n";
    }
}