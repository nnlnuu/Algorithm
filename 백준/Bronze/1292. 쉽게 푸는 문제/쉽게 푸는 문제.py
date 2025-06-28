'''
    B1 1292 | 쉽게 푸는 문제
    알고리즘 분류 : #MTH
    날짜 : 2025-06-28 11:35
'''
import sys
input = sys.stdin.readline
a, b = list(map(int,input().split()))

arr2 = [i for i in range(1,46) for _ in range(i)][:1000]
s = sum(arr2[a-1:b])
print(s)
