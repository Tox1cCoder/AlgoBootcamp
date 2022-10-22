import sys
from math import gcd

fi = open("input.txt")
fo = open("output.txt", "w")
sys.stdin = fi
sys.stdout = fo

n = int(input())
x, y = [0]*(n+1), [0]*(n+1)
s, s1 = 0, 0
for i in range(n):
    u, v = map(int, input().split())
    x[i], y[i] = u, v
x[n], y[n] = x[0], y[0]


def dots(i):
    from math import gcd
    a, b = y[i] - y[i + 1], x[i] - x[i + 1]
    if a == 0 or b == 0:
        return abs(a) + abs(b)
    return abs(gcd(a, b))


for i in range(n):
    s1 += dots(i)
    s += x[i] * y[i + 1] - x[i + 1] * y[i]

s = abs(s)
s2 = (s + 2 - s1)//2
print(s1 + s2)

fo.close()
fi.close()
