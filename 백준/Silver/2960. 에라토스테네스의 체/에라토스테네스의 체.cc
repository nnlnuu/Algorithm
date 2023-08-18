/**
* [SILVER 4] 에라토스테네스의 체
* @writer : nnlnuu
*/
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
bool prime[1001];
int main(void) {
    FASTIO
    int n,k,temp,count,ans=0;
    cin >> n>> k;
    fill(prime,prime+1001, true);
        for(int i = 2;i<=n;i++){
            temp = i;
            count = 1;
            while(n >= temp){
                if(prime[temp]){
                    prime[temp]= false;
                    ans++;
                }
                if(ans==k) {
                    cout << temp;
                    return 0;
                }
                count++;
                temp = i*count;
            }
        }
    return 0;
}