/**
 * [SILVER 5] 나이순 정렬
 * @writer : nnlnuu
 * */
#include <bits/stdc++.h>
using  namespace  std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0)
vector< pair<int,string> > vec;
bool compare(pair<int,string> a,pair<int,string>b){
    return a.first < b.first;
}
int main(void){
    FASTIO;
    int n,age;
    string name;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> age;
        cin >> name;
        vec.push_back(make_pair(age,name));
    }
    stable_sort(vec.begin(),vec.end(), compare);
    vector<pair<int,string> > :: iterator it;
    for(it = vec.begin();it!=vec.end();it++){
        cout << it->first <<" "<<it->second <<'\n';
    }
}
