
'''
    S5 13241 | 최소공배수
    알고리즘 분류 : #NBT
    날짜 : 2025-06-27 00:23
'''
import sys
input = sys.stdin.readline
def gcd(a,b):
    r = a % b 
    if r== 0:
        return b
    return gcd(b,r)


a , b = list(map(int, input().split()))
print(int(a*b /gcd(a,b)))

