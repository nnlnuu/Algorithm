'''
    B3 3460 | 이진수
    알고리즘 분류 : #IMP #MTH
    날짜 : 2025-06-18 13:06
'''
import sys
input = sys.stdin.readline

T = int(input())

def get_binary(n):
    div = n 
    cnt = 0
    while div > 0:
        if div %2 == 1 :
            print(cnt,end=" ")
        div = div >> 1 
        cnt += 1  
    print()

for _ in range(T):
    n = int(input())
    get_binary(n)
