/**
* [SIlVER 4] 정수 제곱근
* @writer : nnlnuu
*/
#include<bits/stdc++.h>
using namespace  std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main(){
    FASTIO;
    unsigned long long  N;
    cin >> N;
    unsigned long long b;
    unsigned long long low,high;
    low = 0;high = N;
    unsigned  long long mid;
    while(low < high){
        mid = (low + high)/2;
        if(N > (double) mid * mid){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    cout << low;
    return 0;
}