/**
* [BRONZE 3] 직각 삼각형
* @writer : nnlnuu
*/
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(void) {
    FASTIO
    int a,b,c;
    vector<int> vec;
    vector<string> ans;
    while(true){
        cin >> a >> b >> c;
        if(!(a&&b&&c)) break;
        vec.push_back(a),vec.push_back(b),vec.push_back(c);
        sort(vec.begin(),vec.end());
        if((vec[0]*vec[0] + vec[1]*vec[1]) == vec[2]*vec[2])
            cout << "right\n";
        else
            cout << "wrong\n";
        vec.clear();
    }
    return 0;
}