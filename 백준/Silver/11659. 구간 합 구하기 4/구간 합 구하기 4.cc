/**
 * [SILVER 3] 구간 합 구하기 4
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long narr[1000001];
vector<long long> vec;
int sum[100000];
int main(void){
    int n,m;
    int temp;
    int a,b;
    cin >> n >> m;
    narr[0] = 0;
    for(int i = 1;i<=n;i++){
        cin >> temp;
        narr[i] = narr[i-1] + temp;
    }
    for(int j =0;j<m;j++){
        cin >> a >> b;
        temp = narr[b] - narr[a-1];
        vec.push_back(temp);
    }
    vector<long long> :: iterator it = vec.begin();
    for(;it!=vec.end();it++){
        cout << *it <<'\n';
    }

    return 0;
}