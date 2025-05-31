'''
    S1 1697 | Silver 1
    알고리즘 분류 : #BFS
    날짜 : 2025-05-31 16:19
'''
import sys
from collections import deque

input = sys.stdin.readline

que = deque()
MAXRANGE = 100001
N, K = list(map(int,input().split()))
visited = [False] * (MAXRANGE)

def bfs(N,K):
    c = 0
    que.append((N,c))
    visited[N] = True
    while que:
        n, cnt = que.popleft()
        if (n == K):
            print(cnt)
            break
        for  next_step in (n+1, n-1, 2*n):
            if 0 <= next_step and next_step<MAXRANGE and not visited[next_step]:
                visited[next_step] = True
                que.append((next_step,cnt+1))
        
bfs(N,K)