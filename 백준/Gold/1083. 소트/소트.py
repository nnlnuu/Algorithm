'''
    G4 1083 | Gold 4 
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-06-01 08:32
'''
import sys
input = sys.stdin.readline

N = int(input())
arr = [0] * N 
arr = list(map(int,input().split()))
S = int(input())

for pivot in range(N):
    if S == 0:
        break

    mx,idx = arr[pivot],pivot
    # pivot ~ pivot +S 까지 중에서의 최대 값 & 최대 idx
    for i in range(pivot, min(N,pivot+S+1)):
        if arr[i] > mx:
            mx = arr[i]
            idx = i
    
    S -= (idx - pivot)
    for j in range(idx,pivot,-1):
        arr[j] = arr[j-1]

    arr[pivot] = mx

print(*arr)