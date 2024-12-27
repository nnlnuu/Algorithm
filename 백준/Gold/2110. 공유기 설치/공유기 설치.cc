/**
* [GOlD 4] 공유기 설치
* @writer: nnlnuu
*/
#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int N,  C;
vector<long long> vec;
bool isPossible(long long slice){
    int cnt=1;
    long long cur = vec[0];
    for(int i = 1;i<N;i++){
        if(vec[i]-cur >= slice){
            cnt++;
            cur = vec[i];
        }
    }
    return cnt >= C;
}
int main(){
    FASTIO;
    cin >> N >> C;
    for(int i = 0;i<N;i++){
        long long temp;
        cin >> temp;
        vec.push_back(temp);
    }
    long long low = *min_element(vec.begin(),vec.end());
    long long high = *max_element(vec.begin(),vec.end());
    sort(vec.begin(),vec.end());
    for(int i = 0;i<N;i++){
        vec[i] -= low;
    }
    low = *min_element(vec.begin(),vec.end());
    high = *max_element(vec.begin(),vec.end());
    long long mid;

    while(low <= high){
        mid = (low + high+1)/2;
        if(isPossible(mid)) low = mid +1;
        else high = mid-1;
    }
    cout << high;
    return 0;
}
