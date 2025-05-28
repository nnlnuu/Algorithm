'''
    S1 112876 | 
    알고리즘 분류 : #DS #PRQ 
    날짜 : 2025-05-28 17:04
'''
import sys
input = sys.stdin.readline
import heapq
from dataclasses import dataclass,field
N = int(input())
pq = [] 
@dataclass(order=True)
class PrioritizedItem:
    priority: int
    item: any=field(compare=False)

for _ in range(N):
    i = int(input())
    if(i==0):
        if(len(pq)==0):
            print(0)   
        else:
            priority1, priority2, value = heapq.heappop(pq)
            print(value)
    else :  
        # 우선순위 확인 
        first = abs(i)
        if (i < 0 ):
            second = 1
        else:
            second = 2
        heapq.heappush(pq,(first,second,i))