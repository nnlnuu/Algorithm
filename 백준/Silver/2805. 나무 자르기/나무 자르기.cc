/**
* [SIlVER 2] 나무 자르기
* @writer : nnlnuu
*/
#include<bits/stdc++.h>
using namespace  std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
vector<int> vec;
vector<int> ::iterator iter;
int n,m;
int high= INT_MAX;
int low = -1;
int isPossible(int mid){
    int temp;
    long long sum=0;
    auto idx = lower_bound(vec.begin(), vec.end(), mid);

    for(iter = idx;iter !=vec.end();iter++){
        temp = *iter - mid;
        sum += temp;
    }
//    cout << sum << " \n";
    return sum >= m ;
}
int main(){
    FASTIO;
    int temp;
    cin >> n >> m;

    // push
    for(int i = 0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    //sort
    sort(vec.begin(), vec.end());

    low=0;high = vec[n-1];
    while(low < high){
        int mid = (low + high+1)/2;
        if(isPossible(mid)) low = mid;
        else high = mid-1;
    }
    cout << low;

    return 0;
}