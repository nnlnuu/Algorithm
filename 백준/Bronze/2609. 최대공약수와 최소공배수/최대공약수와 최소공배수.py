'''
    B1 2609 | 최대공약수와 최소공배수
    알고리즘 분류 : #NBT
    날짜 : 2025-06-27 00:09
'''
import sys
input = sys.stdin.readline

def gcd(a,b):
    r = a % b 
    if r == 0 :
        return b
    return gcd(b,r)
def lcm(a,b):
    k = gcd(a,b)


    return a * b / k 

a, b = list(map(int, input().split()))

print(gcd(a,b))
print(int(lcm(a,b)))
