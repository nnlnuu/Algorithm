'''
    S1 1850 | 최대공약수
    알고리즘 분류 : #NBT
    날짜 : 2025-06-27 00:28
'''
import sys
input = sys.stdin.readline

def gcd(a,b):
    r = a % b
    while r != 0:
        a = b
        b = r 
        r = a % b
    return b 
a , b = list(map(int,input().split()))
c = gcd(a,b)
print('1'*c)