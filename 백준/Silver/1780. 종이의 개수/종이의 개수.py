'''
    1780 | SIVLER2
    알고리즘 분류 : 재귀, 분할 정복
    날짜 : 2025-05-09 11:59
'''
import sys
input = sys.stdin.readline

n = int(input())
paper = [list(map(int, input().split())) for _ in range(n)]
CNT0 = 0
CNT1 = 0
CNTM1 = 0
cnt = []

def divide(x,y,n):
    color = paper[x][y]

    for row in range(x,x+n):
        for col in range(y,y+n):

            if color!= paper[row][col]:
                for a in range(3):
                    for b in range(3):
                        divide(x + (n//3)*a, y + (n//3)*b ,n//3)
                return
    
    if color == 1:
        cnt.append(1)
    elif color == -1 :
        cnt.append(-1)
    else :
        cnt.append(0)

divide(0,0,n)
print(cnt.count(-1),cnt.count(0),cnt.count(1),sep="\n")

