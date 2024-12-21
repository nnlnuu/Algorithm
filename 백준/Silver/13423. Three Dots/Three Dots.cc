/**
* [SILVER 2] Three Dots
 * @Writer : nnlnuu
*/
#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long;
set<int> s;

int main(){
    FASTIO;
    int T;
    int N;
    int temp;
    cin >> T;
    while(T--){
        int arr[1000];
        int ans=0;
        cin >> N;
        s.clear();
        for(int i = 0;i<N;i++){
            cin >> arr[i];
            s.insert(arr[i]);
        }
        for(int i = 0;i<N;i++){
            for(int j = i+1;j<N;j++){
                long long  diff = abs(arr[j]-arr[i]);
                if(s.find(max(arr[j],arr[i])+diff)!=s.end()){
                    ans++;
                }
            }
        }
        cout << ans<<'\n';
    }
    return 0;
}