/**
 * [BRONZE 1] 최대공약수와 최소공배수
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
int main(void){
    int n,m;
    cin >> n>> m;
    cout << gcd(m,n) <<'\n';
    cout << lcm(m,n);
    return 0;
}