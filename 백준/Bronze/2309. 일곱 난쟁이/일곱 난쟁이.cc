/**
* @writer : nnlnuu
* [BRONZE 1] 일곱 난쟁이
* url : https://www.acmicpc.net/problem/1271
*/
#include <bits/stdc++.h>
using namespace  std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int people[9];

int main(){
    vector<int> p;
    for(int i =0;i<9;i++){
        int a;
        cin >> a;
        p.push_back(a);
    }
    int sum=0;
    for(int i =0;i<9;i++){
        sum+=p[i];
    }
    for(int i =0;i<8;i++){
        for(int j =i+1;j<9;j++){
            if(sum - p[i]-p[j]==100){
                p[i]=0;p[j]=0;
                sort(p.begin(),p.end());
                for(int s = 2;s<9;s++){
                    cout << p[s] << '\n';
                }
                return 0;
            }
        }
    }
    return 0;
}