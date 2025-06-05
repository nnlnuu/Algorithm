'''
    S4 10816 | 숫자 카드 2
    알고리즘 분류 : #DS
    날짜 : 2025-06-05 14:51
'''

import sys
input = sys.stdin.readline

N = int(input())

cards = list(map(int, input().split()))

sorted_cards = sorted(cards)

M = int(input())

arr = list(map(int,input().split()))
# print(cards)
# print(sorted_cards)
dic = dict()

for key in arr:
    dic[key] = 0

for cards in sorted_cards:
    if cards in dic.keys() :
        dic[cards] += 1
for i in arr:
    print(dic[i],end=" ")
