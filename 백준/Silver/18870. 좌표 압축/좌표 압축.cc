/**
 * [SILVER 2] 좌표 압축
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int input[1000003] = {0,};
int arr[1000003];
int main(void){
    vector<int> vec;
    vector<int> vec_arr;
    int n,temp;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
        vec_arr.push_back(temp);
    }

    sort(vec_arr.begin(),vec_arr.end());
    reverse(vec.begin(),vec.end());
    vector<int> :: iterator last = unique(vec_arr.begin(),vec_arr.end());
    for(int i = n-1;i>=0;i--){
        temp = vec[i];
        cout << lower_bound(vec_arr.begin(),last,temp)-vec_arr.begin()<< " ";
        vec.pop_back();
    }
    return 0;
}