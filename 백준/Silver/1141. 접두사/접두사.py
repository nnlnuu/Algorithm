'''
    S1 1141 | 접두어
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-06-05 11:35
'''
import sys
input = sys.stdin.readline

N = int(input())
arr = []
for _ in range(N):
    arr.append(input()[:-1])

sorted_arr = sorted(arr)
pivot = sorted_arr[0]
cnt = 1
ans = []
for idx, pivot in enumerate(sorted_arr):
    for cand in sorted_arr[idx+1:]:
        if pivot == cand[:len(pivot)]:
            break
        
    else:
        ans.append(pivot)

print(len(ans))
