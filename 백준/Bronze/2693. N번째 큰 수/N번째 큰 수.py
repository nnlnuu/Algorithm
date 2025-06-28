'''
    B1 2693 | N 번째 큰 수 
    알고리즘 분류 : #SRT 
    날짜 : 2025-06-28 11:27
'''
import sys
input = sys.stdin.readline

T = int(input())
ans = []
for _ in range(T):
    arr = list(map(int,input().split()))
    arr = sorted(arr,reverse=True)
    ans.append(arr[2])

for a in ans:
    print(a)