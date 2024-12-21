/**
* [SILVER 2] 최소힙
* @writer: nnlnuu
*/
#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main(){
    FASTIO;
    priority_queue< int,vector<int>,greater<int> > pq;
    int N;
    cin >> N;
    int temp;
    while(N--){
        cin >> temp;
        if(temp == 0){
            if(pq.empty()) cout << "0\n";
            else {
                cout << pq.top() <<'\n';
                pq.pop();
            }
        }else{
            pq.push(temp);
        }
    }



    return 0;
}