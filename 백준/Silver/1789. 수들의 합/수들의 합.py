'''
    S5 1789 | Silver 5
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-05-31 21:16
'''
import sys
input = sys.stdin.readline

N = int(input())
cnt = 0
sum = 0 
digit = 1
while(N > sum ):
    if (N - sum >= digit):
        sum += digit
        digit += 1 
        # print(sum)
        cnt += 1
    else:
        break

print(cnt)