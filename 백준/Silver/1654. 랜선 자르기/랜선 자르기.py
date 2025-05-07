'''
    1654 | Tier
    알고리즘 분류 : 이분 탐색
    날짜 : 2025-05-08 01:06
'''
n,k = list(map(int, input().split()))
arr = []
for i in range(n):
    arr.append(int(input()))

s = 1
e = max(arr)

while(s <= e):
    mid = (e+s) // 2
    LAN = 0
    for item in arr:
        LAN += item // mid
    if LAN >= k:
        s = mid + 1
    else:
        e = mid -1 
print(e)