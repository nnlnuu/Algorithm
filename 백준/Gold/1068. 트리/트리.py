'''
    G5 1068 | Gold 5
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-06-01 10:06
'''
import sys
from collections import defaultdict
input = sys.stdin.readline

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

N = int(input())

tree = list(map(int,input().split()))

d = int(input())
root = None

def dfs(num,tree):
    tree[num] = -2
    for i in range(len(tree)):
        if num == tree[i]:
            dfs(i,tree)

dfs(d,tree)
cnt = 0 
for i in range(len(tree)):
    if tree[i] != -2 and i not in tree:
        cnt += 1
print(cnt) 