'''
    S3 1213 | Silver 3
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-05-31 21:53
'''
import sys
input = sys.stdin.readline
from collections import Counter
name = input()[:-1]
alphabet = [0] * 26

checkword = Counter(name)
# print(checkword)

cnt = 0
mid = 0
result = ""
mid = ""
for k,v in list(checkword.items()):
    if v % 2 == 1:
        cnt += 1
        mid = k 
        if cnt >= 2:
            print("I'm Sorry Hansoo ")
            exit()
        
for k ,v in sorted(checkword.items()):
    result += (k * (v//2)) 

print(result + mid + result[::-1])
