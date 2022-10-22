import sys

fi = open("input.txt")
fo = open("output.txt", "w")
sys.stdin = fi
sys.stdout = fo

b1, d1 = map(int, input().split())
b2, d2 = map(int, input().split())

l1 = pow(b1, d1 - 1)
r1 = l1 * b1
l2 = pow(b2, d2 - 1)
r2 = l2 * b2

lr = max(l1, l2)
rr = min(r1, r2)

ans = 0 if lr > rr else rr - lr
print(ans)
