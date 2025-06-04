'''
    B3 32866 | B3
    알고리즘 분류 : #IM
    날짜 : 2025-05-29 14:54
'''
import sys
input = sys.stdin.readline

N = int(input())
X = int(input())

discounted = N * (100- X)/100
# print(discounted)

saved =  ((N / (discounted)) -1 ) * 100 
print(round(saved,6))