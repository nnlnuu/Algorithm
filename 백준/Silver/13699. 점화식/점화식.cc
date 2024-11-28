/**
 * [GOLD 5] 아름다운 문자열
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long arr[35];
int main(){
    FASTIO;
    int n;
    cin >> n;
    int i,j;
    arr[0]=1;
    for(int k = 1;k<=n;k++){
        i = 0;
        j = k-1;
        for(int s = 0;s<k;s++){
            arr[k] += arr[i++] * arr[j--];
        }
    }
    cout << arr[n];
    return 0;
}