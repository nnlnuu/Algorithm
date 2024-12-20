/**
 * [GOLD 5] 아름다운 문자열
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long n;
long long work(long long n){
    long long sum = n;
    int digit = log10(n) +1;
    for(int i = 0;i<digit;i++){
        int q = n %10;
        n /= 10;
        sum += q;
    }
    return sum;
}
int main(){
    FASTIO;
    cin >> n;
    int digit = log10(n)+1;
    for(long long i = n - digit *9;i<n;i++){
        if(work(i)==n) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}