'''
    B1 1934 | 최소공배수 
    알고리즘 분류 : #NBT 
    날짜 : 2025-06-27 00:15
'''
import sys
input = sys.stdin.readline
ans = []
def gcd(a,b):
    temp = b
    while True:
        div = a % temp 
        if a % temp == 0:
            return temp
        a = temp 
        temp = div 




T = int(input())
for _ in range(T):
    a, b = list(map(int,input().split()))
    ans.append(int(a*b/gcd(a,b)))

for a in ans:
    print(a)
    
