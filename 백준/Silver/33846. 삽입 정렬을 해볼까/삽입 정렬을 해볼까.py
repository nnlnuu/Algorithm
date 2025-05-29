import sys
import heapq
input = sys.stdin.readline

n, t = map(int, input().split())
arr = list(map(int, input().split()))

heap = []

# t개의 원소만 정렬된 형태로 유지
for i in range(t):
    heapq.heappush(heap, arr[i])  # O(log t)

# 힙 정렬
sorted_part = sorted(heap)

# 나머지 붙이기
sorted_part.extend(arr[t:])
print(*sorted_part)