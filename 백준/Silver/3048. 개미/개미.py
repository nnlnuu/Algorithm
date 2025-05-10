'''
    3048 | SIVER4
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-05-10 14:16
'''
import sys
input = sys.stdin.readline

n1, n2 = list(map(int, input().split()))

s1 = input()[:-1][::-1] # ['ABC']
s2 = input()[:-1] # ['DEF']

g1 = []
g2 = []

for i in range(n1):
    g1.append(s1[i])

for i in range(n2):
    g2.append(s2[i])

T = int(input())

seq = g1 + g2 

for t in range(T):
    step = 0
    
    while(step < len(seq)-1):
        if((seq[step] in g1) and seq[step+1] in g2):
            # 두개 교환
            # print(seq)
            seq[step], seq[step+1] = seq[step+1],seq[step]
            # print(seq)
            step += 2
        else:
            step +=1

print("".join(seq))