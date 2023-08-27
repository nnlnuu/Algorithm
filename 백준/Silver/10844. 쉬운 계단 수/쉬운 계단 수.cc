/**
* @writer : nnlnuu
* [SILVER 1] 쉬운 계단 수
*/
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int main(){
    long long n;
    int count[100][10];
    int i, j;

    cin >> n;
    count[0][0] = 0;
    for (i = 1; i <= 9; i++)
        count[0][i] = 1;

    for (i = 1; i < n; i++){
        count[i][0] = count[i - 1][1];
        for (j = 1; j < 9; j++)
        {
            count[i][j] = count[i - 1][j - 1] + count[i - 1][j + 1];
            count[i][j] = count[i][j] % 1000000000;
        }
        count[i][9] = count[i - 1][8];
    }

    int sum = 0;
    for (i = 0; i < 10; i++){
        sum += count[n - 1][i];
        sum = sum % 1000000000;
    }
    cout << sum <<'\n';
}