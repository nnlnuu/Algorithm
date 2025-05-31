'''
    S4 10610 | Silver 4
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-05-31 23:38
'''
import sys
input = sys.stdin.readline
from collections import Counter

N = input()[:-1]

check_N = Counter(N)

if check_N['0'] == 0:
    print("-1")
else:
    sum = 0

    for k,v in list(check_N.items()):
        sum += (ord(k)-48) * v 
    
    if sum % 3 != 0:
        print("-1")
    else:
        result = ""
        for k,v in sorted(check_N.items(),reverse=True):
            result += ((k)  * v)

        print(result)