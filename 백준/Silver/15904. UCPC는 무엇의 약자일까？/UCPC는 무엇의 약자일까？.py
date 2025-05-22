'''
    S5 15904 | Silver5
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-05-22 13:40
'''
import sys
input =sys.stdin.readline

s = input()


UCPC = "UCPC"
pointer = -1
visited = [False] * 4
for idx, c in enumerate(UCPC):
    pointer += 1 
    for p in range(pointer,len(s)):
        if c == s[p]:
            pointer = p
            visited[idx] = True
            break

for v in visited:
    if v == False:
        print("I hate UCPC")
        exit()

print("I love UCPC")


