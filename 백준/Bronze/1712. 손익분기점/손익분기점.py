'''
    B2 1712 | Bronze2 
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-05-22 13:33
'''
import sys
input = sys.stdin.readline

a,b,c = list(map(int,input().split()))

if(b >= c) :
    print(-1)
    exit()

earn = c - b 
n = a // earn 
print(n+1)

