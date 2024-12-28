/**
* [GOLD 2] 가장 긴 증가하는 부분 수열
* @writer : nnlnuu
*/
#include<bits/stdc++.h>
using namespace  std;
vector<int> vec;
int N;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long arr[1000002];
void insert_pos(int n,int pos){
    long long idx = lower_bound(arr,arr+pos,n)-arr;
    arr[idx] = n;
}
int main(){
    FASTIO;
    cin >> N;
    for(int i = 0;i<N;i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    fill(arr,arr+N,INT32_MIN);
    long long cur = vec[0];
    long long  cur_idx = 0;
    arr[cur_idx++] = cur;

    for(int i = 1; i<N;i++){ // 1~ N-1까지
        if(cur < vec[i]){
            arr[cur_idx] = vec[i];
            cur = arr[cur_idx++];
        }else if(cur > vec[i]){ // cur >= vec[i]
            insert_pos(vec[i],cur_idx);
            cur = arr[cur_idx-1];
        }
    }
    int cnt = 0;
    for(int i = 0; i<N;i++){
        if(arr[i]== INT32_MIN) break;
        cnt++;
    }
    cout << cnt;
    return 0;
}