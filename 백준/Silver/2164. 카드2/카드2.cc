#include<bits/stdc++.h>
using namespace std;
int main(void) {
	queue<int> q;
	int n,temp;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			cout << q.front();
			break;
		}
		q.pop();
		temp = q.front();
		q.pop();
		q.push(temp);
	}


	return 0;
}