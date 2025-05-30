'''
    G5 1916 | G5
    알고리즘 분류 : 
    날짜 : 2025-05-30 14:55
'''
import sys
input = sys.stdin.readline
import heapq
import math

INF = math.inf 
N = int(input())
M = int(input())

graph = [[] for _ in range(N+1)]
distance = [INF] * (N+1)

for _ in range(M):
    u,v,w = list(map(int,input().split()))
    graph[u].append((v,w))


def dijkstra(start,end):
    queue = []
    distance[start] = 0
    heapq.heappush(queue,(0,start))

    while queue:
        dist, now = heapq.heappop(queue)
        if dist < distance[now]:
            continue
        if now == end :
            break
        
        for v,w in graph[now]:
            cost = dist + w
            if cost < distance[v]:
                distance[v] = cost
                heapq.heappush(queue,(cost,v))
            
st, end = list(map(int,input().split()))
dijkstra(st,end)

print(distance[end])