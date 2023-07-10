/**
 * [SILVER 4] 나는야 포켓몬 마스터 이다솜
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
#include<map>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(void){
    FASTIO
    map<int,string> mpV;
    map<string,int> mpK;
    int n,m;
    string str;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        cin >> str;
        mpV.insert(make_pair(i,str));
        mpK.insert(make_pair(str,i));
    }
    for(int i = 1;i<=m;i++){
        cin >> str;
        if(isdigit(str[0])==0){//숫자 아님
            map<string,int> :: iterator it = mpK.find(str);
            cout << it->second <<'\n';
        }else { // 숫자
            int istr = stoi(str);
            map<int,string> :: iterator it = mpV.find(istr);
            cout << it->second<<'\n';
        }
    }
    return 0;
}