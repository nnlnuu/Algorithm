'''
    S3 1002 | Silver 3
    알고리즘 분류 : #GEO #BRC
    날짜 : 2025-06-02 14:48
'''
import sys
input = sys.stdin.readline
import math
T = int(input())

def get_point_dist(x1,y1,x2,y2):
    dist = math.sqrt((x1-x2)**2 + (y1-y2)**2)
    
    return dist

ans = []
for _ in range(T):
    x1, y1, r1, x2, y2 , r2 = list(map(int,input().split()))
    if x1 ==  x2 and y1 == y2 and r1 == r2 :
        # print(-1)
        ans.append(-1)
        continue
    dist = get_point_dist(x1,y1,x2,y2)
    mx = float(r1 + r2)
    mn = float(abs(r1-r2))

    if mx < dist:
        # print(0)
        ans.append(0)
        continue
    elif mx == dist:
        # print(1)
        ans.append(1)
        continue
    elif mn < dist < mx :
        # print(2)
        ans.append(2)
        continue
    elif mn == dist :
        # print(1)
        ans.append(1)
        continue
    else:
        # print(0)
        ans.append(0)
        continue

for res in ans:
    print(res)