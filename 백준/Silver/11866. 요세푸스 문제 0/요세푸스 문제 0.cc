/**
* [SIlVER 4] 요세푸스0
* @writer : nnlnuu
*/
#include<bits/stdc++.h>
using namespace  std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main(){
    int N,K;
    cin >> N >> K;
    deque<int> dq;
    for(int i = 1;i<=N;i++) dq.push_back(i);
    cout << "<";

    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=K;j++){
            dq.push_back(dq.front());
            dq.pop_front();
        }
        cout << dq.back();
        dq.pop_back();
        if(!dq.empty()){
            cout<<", ";
        }
    }
    cout << ">";

    return 0;
}
