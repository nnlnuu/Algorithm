'''
    B3 2501 | B3
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-05-21 20:41
'''
import sys
import math
input = sys.stdin.readline

n,k= map(int,input().split())
rt = int(math.sqrt(n))
factors  = []
for i in range(rt):
    if (n % (i+1))== 0 :
        factors.append(i+1)
        if not (int(n // (i+1)) in factors):
            factors.append(int(n //(i+1)))

factors = sorted(factors)

if k > len(factors):
    print(0)
    exit()

print(factors[k-1])

