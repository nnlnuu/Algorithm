'''
    G5 13023 
    알고리즘 분류 : #DFS
    날짜 : 2025-05-21 19:58
'''
import sys
input = sys.stdin.readline

n,m = map(int,input().split()) # 사람 수 , 간선 수
graph = [[] for _ in range(n)]


for _ in range(m):
    u,v = map(int,input().split())
    graph[u].append(v)
    graph[v].append(u)


def dfs(v,num):
    num += 1
    if num == 5:
        print(1)
        exit()
    visited[v] = True
    for i in graph[v]:
        if not visited[i]:
            dfs(i,num)
    visited[v] = False
        

# 쭉 이어지는 4명? 있으면 1 없으면 0 
for idx in range(n):
    visited = [False] * n
    dfs(idx,0)

print(0)