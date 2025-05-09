'''
    2587 | BRONZE2
    알고리즘 분류 : 정렬, 사칙연산
    날짜 : 2025-05-09 15:41
'''

import sys

input = sys.stdin.readline

lis = [ int(input()) for _ in range(5)]
lis = sorted(lis)

mean_val = sum(lis)//len(lis)

print(mean_val)
print(lis[2])
