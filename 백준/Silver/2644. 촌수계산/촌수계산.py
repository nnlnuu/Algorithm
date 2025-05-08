'''
    2644 | SIVER2 
    알고리즘 분류 : DFS 
    날짜 : 2025-05-08 11:06
'''
import sys
input = sys.stdin.readline
result = []
num = int(input())

start, end = list(map(int, input().split()))
m = int(input())

# 어떤 데이터 구조에 저장하는게 좋을까..?
graph = [[] for _ in range(num+1)]# 11x11 (10 x 10) 배열 인덱스 맞추기 위해서
visited = [False] * (num+1)

for i in range(m):
    x, y = list(map(int, input().split()))
    graph[x].append(y)
    graph[y].append(x)

def dfs(v,num):
    num += 1
    visited[v] = True

    if v == end:
        result.append(num)

    for i in graph[v]:
        if not visited[i]:
            dfs(i,num)

dfs(start,0)

if(len(result)==0):
    print(-1)
else:
    print(result[0]-1)