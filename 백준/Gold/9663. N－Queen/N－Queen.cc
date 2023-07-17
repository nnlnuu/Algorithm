#include<bits/stdc++.h>
using namespace std;
int n;
int count = 0;
int isused1[40];
int isused2[40];
int isused3[40];

void func(int cur) {
	if (cur == n) {
		::count++; 
		return;
	}
	for (int i = 0; i < n; i++) {
		if (isused1[i] == false && isused2[cur + i] == false
			&& isused3[cur - i + n - 1] == false) {
			isused1[i] = 1; isused2[cur + i] = 1; isused3[cur - i + n - 1] = 1;
			func(cur + 1);
			isused1[i] = 0; isused2[cur + i] = 0; isused3[cur - i + n - 1] = 0;
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	func(0);
	cout << :: count;
	return 0;
}