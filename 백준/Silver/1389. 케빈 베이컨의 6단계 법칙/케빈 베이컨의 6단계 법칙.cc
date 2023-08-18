/**
 * [SILVER 1] 케빈 베이컨의 6단계 법칙
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
#define X first
#define Y second
const int INF = 1e9;
int visited[26][26];
bool compare(pair<int,int>  p1, pair<int,int>p2){
    if(p1.first==p2.first){
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}
int main(void) {
    FASTIO
    int n,m;
    int p1,p2;
    cin >> n >> m;
    vector<pair<int,int> >  relation;
    vector< vector<int> > dist(n,vector<int>(n,INF));
    // 대각선 초기화
    for(int i = 0;i<n;i++){
        dist[i][i] = 0;
    }
    //pair 쌍 저장
    for(int i  = 0;i<m;i++){
        cin >> p1 >> p2;
        dist[p1-1][p2-1] = dist[p2-1][p1-1] = 1;
        //relation.push_back(make_pair(p1,p2));
    }
    // floyd warshall
    for(int k = 0;k<n;k++){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(dist[i][j] > dist[i][k] + dist[k][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    // dist 출력
//    for(int i = 0;i<n;i++){
//        for(int j = 0;j<n;j++){
//            cout << dist[i][j] <<" ";
//        }cout << '\n';
//    }
    int sum;
    for(int i = 0;i<n;i++){
        sum= 0;
        for(int j = 0;j<n;j++){
            sum+=dist[i][j];
        }
        relation.push_back(make_pair(sum,i));
    }
    sort(relation.begin(),relation.end(),compare);
    cout << relation[0].second+1;
    return 0;
}