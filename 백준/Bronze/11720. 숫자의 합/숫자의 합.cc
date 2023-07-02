/**
 * [BRONZE 4] 숫자의 합
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(void){
    int n;
    int sum=0;
    string str;
    cin >> n;
    cin >> str;
    for(int i =0;i<n;i++){
        sum+= str[i]-'0';
    }
    cout << sum;
    return 0;
}