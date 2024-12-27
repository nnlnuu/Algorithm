/**
* [GOlD 4] 킥보드로 등교하기
* @writer: nnlnuu
*/
#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
vector<int> vec;
vector<int> interval;
int L,N,K;
int mid;
bool isPossible(int slice){
    int cnt=0;
    int cur=0; // 현재 지점

    for(int i = 0;i<=N;i++){
        if(vec[i]-cur > slice){
            cnt++;
            cur = vec[i-1];
        }
        else if(vec[i]-cur == slice){
            if(vec[i]==L) break;
            cnt++;
            cur = vec[i];
        }
    }
    return cnt <= K ; // cnt 가 더 적으면,,, mid 를 늘려야 됨
}
int main(){
    FASTIO;
    // 첫 번째 줄에 학교까지의 거리(L), 킥보드 충전소의 개수(N), 최대 충전소 방문 횟수(K)
    // K < N
    cin >> L >> N >> K;
    for(int i = 0;i<N;i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }// 여기까지 N 개
    vec.push_back(L); // N + 1 개
    interval.push_back(vec[0]);
    for(int i = 1;i<=N;i++){
        int a,b;
        a = vec[i-1];
        b = vec[i];
        interval.push_back(b - a);
    }

    sort(interval.begin(),interval.end());
    int high = L;
    int low = *(interval.end()-1);
    while(low < high){
        mid = (high + low)/2;
        // isPossible 이란 ->
//        cout << "Before: " << low << " " <<mid << " " <<  high << "\n";
        if(isPossible(mid)) high = mid;
        else low = mid+1;
    }
//    mid = (high + low + 1)/2;
    cout << low;
    return 0;
}