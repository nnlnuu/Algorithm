'''
    S5 11931 | 수 정렬하기 4
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-06-02 21:30
'''
import sys
input = sys.stdin.readline

N = int(input())

arr = []
for _ in range(N):
    i = int(input())
    arr.append(i)

arr = sorted(arr)
for i in range(len(arr)-1,-1,-1):
    print(arr[i])
