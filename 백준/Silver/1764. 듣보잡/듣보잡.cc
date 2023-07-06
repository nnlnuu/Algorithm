/**
 * [SILVER 4] 듣보잡
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
string nStr[500000];
string mStr[500000];
int main(void){
    int n,m;
    cin >> n>> m;
    string str;
    for(int i =0;i<n;i++){
        cin >> str;
        nStr[i] = str;
    }
    for(int i =0;i<m;i++){
        cin >> str;
        mStr[i] = str;
    }
    sort(nStr,nStr+n);
    sort(mStr,mStr+m);
    int count = 0;
    vector<string> vec;
    for(int i = 0;i<n;i++){
        if(binary_search(mStr,mStr+m,nStr[i])){
            count++;
            vec.push_back(nStr[i]);
        }
    }
    vector<string> :: iterator it = vec.begin();
    cout << count <<'\n';
    for(;it!=vec.end();it++){
        cout<< *it<<'\n';
    }
    return 0;
}