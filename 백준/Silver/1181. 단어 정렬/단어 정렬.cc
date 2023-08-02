/**
 * [SILVER 5] 단어 정렬
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
vector< pair<int,string> > vec;
int main(void){
    FASTIO
    int n,len;
    string str;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> str;
        len = str.length();
        vec.push_back(make_pair(len,str));
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    vector< pair<int,string> > :: iterator it = vec.begin();
    for (; it!=vec.end() ; it++) {
        cout << it->second <<'\n';
    }

    return 0;
}