'''
    S1 1991 | Silver 1
    알고리즘 분류 : TODO {1:분류명}
    날짜 : 2025-06-01 09:16
    트리 구조를 입력 받는 방법에 대해서 
'''
import sys
input = sys.stdin.readline

N = int(input())
tree = {}

for _ in range(N):
    root, left, right = list(map(str,input().split()))
    tree[root] = [left,right]


def preorder(root):
    if root != ".":

        print(root,end="")
        preorder(tree[root][0]) # left
        preorder(tree[root][1]) # right 
def inorder(root):
    if root != ".":
        inorder(tree[root][0]) # left 
        print(root,end="")
        inorder(tree[root][1]) # right 

def postorder(root):
    if root!= ".":
        postorder(tree[root][0])
        postorder(tree[root][1])
        print(root,end="")

preorder('A')
print()
inorder('A')
print()
postorder('A')