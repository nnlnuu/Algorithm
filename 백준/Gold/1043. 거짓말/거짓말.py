'''
    G4 1043 | 거짓말 
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-06-02 15:02
'''

import sys
input = sys.stdin.readline

N , M  = list(map(int,input().split()))
know = list(map(int,input().split()))[1:]
parties = []
parent = list(range(N+1))


def find(parent,x):
    if parent[x] != x:
        parent[x] = find(parent,parent[x])
    return parent[x] # 최종적으로 누군가(parent) 는 자기 자신이 parent[x] 일 것 

def union(parent, a, b, know):
    a = find(parent, a)
    b = find(parent, b)
    # print(a,b)
    if a in know and b in know:
        return 

    # Know 가 있는 한쪽에 상황에서 두개를 합치는 경우 
    if a in know:
        parent[b] = a

    elif b in know:
        parent[a] = b
    # know 가 둘다 없는 경우 작은 숫자로 합치기 
    else:
        if a < b :
            parent[b] = a
        else :
            parent[a] = b 
for _ in range(M):
    party_info = list(map(int, input().split()))
    party_len = party_info[0]
    party = party_info[1:]

    for i in range(party_len-1):
        union(parent,party[i],party[i+1],know)
    parties.append(party)

ans = 0

for party in parties:
    for i in range(len(party)):
        if find(parent,party[i]) in know:
            break
    else:
        ans += 1
print(ans)