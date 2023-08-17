/**
 * [SILVER 5] 좌표 정렬
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
bool compare(pair<int,int> p, pair<int,int> q ){
    if(p.first == q.first){
        return p.second < q.second;
    }
    return p.first < q.first;
}
//vector< pair<int,int> > vec;
int main(void) {
    FASTIO
    int n,x,y;
    cin >> n;
    vector< pair<int,int> > vec;
    while(n--){
        cin >> x >> y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end(), compare);
    vector<pair <int,int> > :: iterator  it ;
    for(it = vec.begin();it!= vec.end();it++){
        cout << it->first << " "<<it->second <<'\n';
    }

    return 0;
}