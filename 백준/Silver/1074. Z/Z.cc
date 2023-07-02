#include<bits/stdc++.h>
using namespace std;
int func(int n,int r, int c) {//2^n * 2^n 배열에서 (r,c)를 방문하는 순서를 반환하는 함수
	// base conditioin 설정
	if (n == 0) return 0;
	int half = 1<<(n-1);
	if (r < half && c < half) return func(n-1, r, c);
	else if (r < half && c >= half) return half * half + func(n-1, r, c - half);
	else if (r >= half && c < half) return half * half * 2 + func(n-1, r - half, c);
	else  return half * half * 3 + func(n-1, r - half, c - half);
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,r,c;
	cin >> n >> r >> c; 
	cout << func(n, r, c);

	return 0;
}