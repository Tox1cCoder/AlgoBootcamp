import sys
from math import gcd

fi = open("input.txt")
fo = open("output.txt", "w")
sys.stdin = fi
sys.stdout = fo


def xuat_kq():
    global ans
    import os
    print(ans)
    fo.close()
    fi.close()
    os._exit(os.F_OK)


n = int(input())
s = input()
k = int(input())
b, mn, mx = [False]*26, 'z', 'a'

for c in s:
    b[ord(c) - 97] = True
    if mx < c:
        mx = c
    if mn > c:
        mn = c

if n < k:
    ans = s
    for i in range(n - k):
        ans += mn
    xuat_kq()

p = k - 1
while p >= 0 and s[p] == mx:
    p -= 1

for i in range(ord(s[p]) - 97 + 1, 26):
    if b[i]:
        q = chr(i + 97)
        break

ans = s[:p] + q
for i in range(p + 1, k):
    ans += mn

xuat_kq()
