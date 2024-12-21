/**
* [BRONZE 2] 폭죽쇼
 * @writer : nnlnuu
*/
#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
bool vis[2000001]= {false,};
int arr[101];
int main(){
    FASTIO;
    int n,c;
    cin >> n >> c;
    for(int i = 1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i = 1;i<=n;i++){
        for(int k = 0;k<=c;k+=arr[i]){
            vis[k]= true;
        }
    }
    int sum = 0;
    for(int i = 1;i<=c;i++){
        if(vis[i]) {
            sum++;
        }
    }
    cout << sum;

    return 0;
}