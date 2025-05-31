#include<bits/stdc++.h>
using namespace std;
#define  X first
#define Y second
int dist[100001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	fill(dist, dist + 100001, -1);
	dist[n] = 0;
	queue<int> q;
	q.push(n);
	while (dist[m] == -1) {
		auto cur = q.front(); q.pop();
		for (int nxt : {cur - 1, cur + 1, cur * 2}) {
			if (nxt < 0 || nxt>100000) continue;
			if (dist[nxt] != -1) continue;
			dist[nxt] = dist[cur] + 1;
			q.push(nxt);
		}
	}cout << dist[m];
	return 0;
}

