'''
    B2 10809 | BRONZE 2
    알고리즘 분류 : 구현, 문자열
    날짜 : 2025-05-20 12:19
'''

import sys
input = sys.stdin.readline
word = input()[:-1]
ls = [-1]*26
for idx, c in enumerate(word):
    index = ord(c)-ord('a') 
    if(ls[index]== -1):
        ls[index] = idx
for item in ls:
    print(item,end=" ")
