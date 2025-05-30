'''
    G4 1753 | G4
    알고리즘 분류 : #GRP #MP
    날짜 : 2025-05-30 12:35
'''

import sys
input = sys.stdin.readline
import math
import heapq

INF = math.inf
V, E = list(map(int,input().split()))
K = int(input())
distance = [INF] * (V + 1)
visit = [False] * (V+1)
graph = [[] for _ in range(V+1)]


for _ in range(E):
    u ,v, w = list(map(int,input().split()))
    graph[u].append((v,w))


def dijkstra(start):
    queue = []
    heapq.heappush(queue,(0,start))
    distance[start] = 0
    while(queue):
        dist, now = heapq.heappop(queue) # dist[now] = 0, dist = 0,
        if dist < distance[now]:
            continue
        
        for v,w in graph[now]:
            cost = dist + w 
            if cost < distance[v]:
                distance[v] = cost
                heapq.heappush(queue, (cost,v))

dijkstra(K) 
for node in range(1,V+1):
    if (distance[node] == math.inf):
        print("INF")
    else:
        print(distance[node])