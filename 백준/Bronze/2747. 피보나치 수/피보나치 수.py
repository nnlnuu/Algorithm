'''
    2747 | BRONZE2
    알고리즘 분류 : Dynamic Programming
    날짜 : 2025-05-08 01:42
'''
import sys
input = sys.stdin.readline
arr = [0] * 50
n = int(input())
# print(arr)
arr[0] = 0
arr[1] = 1

for i in range(2,n+1,1):
    arr[i] = arr[i-1] + arr[i-2]

print(arr[n])