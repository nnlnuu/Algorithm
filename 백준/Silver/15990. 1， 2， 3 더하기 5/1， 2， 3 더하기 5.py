'''
    15990 | SILVER1
    알고리즘 분류 : DP
    날짜 : 2025-05-11 11:43
'''
import sys
input = sys.stdin.readline

dp = [[0 for _ in range(3)] for _ in range(100001)]

dp[1] = [1,0,0]
dp[2] = [0,1,0]
dp[3] = [1,1,1]


for i in range(4,100001):
    dp[i][0] = (dp[i-1][1] + dp[i-1][2]) % 1000000009
    dp[i][1] = (dp[i-2][0] + dp[i-2][2]) % 1000000009
    dp[i][2] = (dp[i-3][0] + dp[i-3][1]) % 1000000009

T = int(input())
for _ in range(T):
    n = int(input())
    print(sum(dp[n])% 1000000009)


