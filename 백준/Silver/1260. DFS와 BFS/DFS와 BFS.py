'''
    S2 1260 | DFS 와 BFS
    알고리즘 분류 : #DFS #BFS
    날짜 : 2025-06-16 15:55
'''

import sys
input = sys.stdin.readline

from collections import deque,defaultdict
que = deque([])
edges = []
stack = deque()
graph = defaultdict(list)


def bfs(st):
    visited = set()
    que.append(st)
    while que:
        cur = que.popleft()
        if cur in visited:
            continue
        else:
            print(cur,end=" ")
            visited.add(cur)
        
        for neighbor in graph[cur]:
            que.append(neighbor)
    # print(*visited)

def dfs(st):
    stack.append(st)
    visited = set()
    while stack:
        cur = stack.pop()

        if cur in visited:
            continue
        else:
            print(cur,end=" ")
            visited.add(cur)
        
        # 인접 노드를 stack 에 추가
        for node in reversed(graph[cur]):
            
            if node not in visited:
                stack.append(node)
    
    # print(*visited)

    
N, M , V = list(map(int,input().split()))

'''
    edges = [[],[],[]...]
    graph 를 defaultdict(list) 로 가지고 있는 경우
'''
for _ in range(M):
    edges.append(list(map(int,input().split())))

for a,b in edges:
    graph[a].append(b)
    graph[b].append(a)

for key in graph:
    graph[key].sort()

# print("===dfs===")
dfs(V)
print()
# print("===bfs===")
bfs(V)

