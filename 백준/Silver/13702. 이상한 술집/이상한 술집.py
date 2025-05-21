'''
    S2 13702 | S2
    알고리즘 분류 : #BS
    날짜 : 2025-05-21 20:56
'''
import sys
input = sys.stdin.readline

n, k = list(map(int, input().split()))
arr = []
for _ in range(n):
    al = int(input())
    arr.append(al)
cap = 0 
s, e = 1, max(arr)

SUM = 0
while(s<=e):
    mid = (s+e)//2
    # print(s,e,mid,end="->")
    
    SUM = 0
    pp = 0
    for item in arr:
        pp += item // mid 
        SUM += (mid * (item//mid))
    # print("pp:",pp,end="->")
    if (pp >= k):
        s = mid + 1 
        # print("start up ",end="->")
    else:
        e = mid -1 
        # print("end down ",end="->")
    # print(s,e)
print(e)


