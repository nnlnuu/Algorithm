'''
    2805 | Tier
    알고리즘 분류 : 이분 탐색
    날짜 : 2025-05-08 01:27
'''
import sys

# 입력값을 빠르게 받기 위한 설정
input = sys.stdin.readline
n,k = list(map(int, input().split()))
# arr = []
# for _ in range(n):
arr=list(map(int, input().split()))

s = 0
e = max(arr)

while(s<=e):
    mid = (s+e)//2
    SUM = 0
    for item in arr:
        if item - mid  > 0:
            SUM += (item - mid)
    
    if SUM >= k:
        s = mid + 1
    else :
        e = mid -1 

print(e)