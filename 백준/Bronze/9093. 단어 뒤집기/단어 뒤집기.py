num = int(input())
arr = []

for _ in range(num):
    arr.append(list(map(str, input().split())))

for sentence in arr:
    for c in sentence:
        print(c[::-1],end=" ")
    print()

