'''
    S2 16953 | Silver2
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-05-31 21:31
'''
import sys
input = sys.stdin.readline
from collections import deque
A, B = list(map(int, input().split()))



def bfs(A,B):
    MAXRANGE = 1000000000
    que = deque()
    que.append((A,0))
    while que:
        num, cnt = que.popleft() 
        if (num == B) :
            print(cnt+1)
            return None

        for next_step in (2* num, num * 10 + 1):
            if(next_step <MAXRANGE):
                que.append((next_step,cnt+1))

    print(-1)
    return None

bfs(A,B)