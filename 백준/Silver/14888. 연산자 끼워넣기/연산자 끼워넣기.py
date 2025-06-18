'''
    S1 14888 | 연산자 끼워넣기
    알고리즘 분류 : #BRT #BTR
    날짜 : 2025-06-18 13:21
'''
import sys
from itertools import permutations
input = sys.stdin.readline
arr = []
N = int(input())
arr = list(map(int,input().split())) # N-1 개
oper = list(map(int,input().split()))

maximum = -1e9
minimum = 1e9
def dfs(depth,total,plus,minus,mul,div):
    global maximum, minimum
    if depth == N:
        maximum = max(total,maximum)
        minimum = min(total,minimum)

    if plus:
        dfs(depth+1, total + arr[depth], plus-1, minus, mul, div)
    if minus:
        dfs(depth+1, total - arr[depth], plus, minus-1, mul, div)
    if mul:
        dfs(depth+1, total * arr[depth], plus, minus, mul-1, div)
    if div:
        dfs(depth+1, int(total/ arr[depth]), plus, minus, mul, div-1)
    
dfs(1,arr[0],oper[0],oper[1],oper[2],oper[3])

print(maximum)
print(minimum)