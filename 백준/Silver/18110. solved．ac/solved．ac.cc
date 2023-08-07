/**
 * [SILVER 4] solved.ac
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
long long person[500001];
int main(void){
    int n;
    cin >> n;
    if (n == 0) {
        cout << '0';
        return 0;
    }
    float r = 0.15;
    long long per,sum=0,ans;
    per = round(n*r);
    for(long long i = 0;i<n;i++){
        cin >> person[i];
    }
    sort(person,person+n);
    for(long long i = per;i<n-per;i++){
        sum+=person[i];
    }
//        cout << person[i] <<' ';
//    }cout<<'\n';
//
//    cout << "per : "<< per <<'\n';
//    cout << "sum : "<< sum <<'\n';
    ans = round(float(sum)/(n-2*per));

    cout << ans;

    return 0;
}