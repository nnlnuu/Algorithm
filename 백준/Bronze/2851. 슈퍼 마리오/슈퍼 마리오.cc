/**
* [BRONZE 1] 슈퍼마리오
 * @writer : nnlnuu
*/
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(){
    FASTIO;
    int temp[2];
    int arr[10];
    int sum =  0;
    for(int & i : arr){
        cin >> i;
    }
    temp[0] = arr[0];
    temp[1] = INT_MAX;
    for(int i : arr){
        temp[0] = sum;
        sum += i;
        temp[1] = sum;
        if(sum >= 100){
            if(abs(temp[1] - 100) <= abs(temp[0]-100)){
                cout << temp[1];
                return 0;
            }else{
                cout << temp[0];
                return 0;
            }
        }
    }
    cout << sum;

    return 0;
}