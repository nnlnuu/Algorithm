/**
 * [SILVER 5] 벚꽃이 정보섬에 피어난 이유
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int n;
int idx[3]={1,2,3};
int arr[10];
int mult(int start, int end){
    int val=1;
    while(start < end){
        val *= arr[start++];
    }
    return val;
}
int partsum(int a1, int a2, int a3){
    int sum =0;
    sum += mult(0,a1);
    sum += mult(a1,a2);
    sum += mult(a2,a3);
    sum += mult(a3,n);
    return sum;
}
int main(){
    FASTIO;
    string str;
    int sum;
    cin >> n;
    for (int i =0;i<n;i++){
        cin >> arr[i];
    }
    int temp;
    int ans = 0;
    while(idx[0]<= n-3){
        temp = partsum(idx[0],idx[1],idx[2]);
        if(temp > ans){
            ans = temp;
        }
        if(idx[2]<n-1){
            idx[2]++;
        }else if(idx[1]<n-2){
            idx[1]++;
        }else if(idx[0]<=n-3){
            idx[0]++;
        }
    }
    cout << ans;
    return 0;
}