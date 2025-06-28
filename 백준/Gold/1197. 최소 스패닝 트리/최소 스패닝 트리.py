'''
    G4 1197 | 최소 스패닝 트리
    알고리즘 분류 : #GRP #MSP
    날짜 : 2025-06-28 11:49
'''
import sys
input = sys.stdin.readline
class DisjoinSet:
    def __init__(self,n):
        self.parent = {}
        self.rank = {}
        for i in range(n+1):
            self.parent[i] = i 
            self.rank[i] = 0 
    
    def find(self,v):
        if self.parent[v] != v:
            self.parent[v] = self.find(self.parent[v])
        return self.parent[v]
    
    def union(self,root1, root2):
        # 정보를 갱신할 때 작은 값으로 갱신하는 것으로 
        if self.rank[root1] > self.rank[root2]:
            self.parent[root2] = root1 
        else :
            self.parent[root1] = root2
            if self.rank[root1] == self.rank[root2]:
                self.rank[root2] += 1

def kruskal(n,info):
    min_weight = 0
    disjoinSet = DisjoinSet(n)
    result = []

    for data in sorted(info, key=lambda cost: cost[2]):
        v, u, w = data
        root1 = disjoinSet.find(v)
        root2 = disjoinSet.find(u)
        if root1 != root2 :
            disjoinSet.union(root1,root2)
            result.append(data)
            min_weight += w

    return result,min_weight

V, E = list(map(int,input().split()))
info = []

for _ in range(E):
    u,v,w = list(map(int,input().split()))
    info.append((u,v,w))

# Kruskal algorithm 
res, w = kruskal(V,info)
print(w)
# 간선들의 가중치를 전부 정렬

# checkuncycle() -> Union find? 
