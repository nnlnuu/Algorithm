/**
* @writer : nnlnuu
* [BRONZE 5] 엄청난 부자2
* url : https://www.acmicpc.net/problem/1271
*/
#include <bits/stdc++.h>
using namespace  std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int n;
int work(int n){
    int sum=n;
    int digit = int(log10(sum));
    int q;
    for(int i = 0;i<=digit;i++){
        q = n%10;
        n = n/10;
        sum += q;
    }
    return sum;
}

int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
        if(work(i) == n){
            cout << i;
            return 0;
        }
    }
    cout << 0;

    return 0;
}