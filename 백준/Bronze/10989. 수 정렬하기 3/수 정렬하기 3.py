'''
    B1 10989 | Bronze 1 
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-06-02 20:58
    - 예상 시간 복잡도:
    - 예상 공간 복잡도:
'''
import sys
input = sys.stdin.readline
from collections import defaultdict
N = int(input())

arr = [0] * 10001

for _ in range(N):
    i = int(input())
    arr[i] += 1


for idx, val  in enumerate(arr):
    # print(k,v)
    if val != 0:
        for _ in range(val):
            print(idx)