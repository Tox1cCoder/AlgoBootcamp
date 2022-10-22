import sys
from math import gcd

fi = open("input.txt")
fo = open("output.txt", "w")
sys.stdin = fi
sys.stdout = fo

u, v = map(float, input().split())
x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

if u > x2:
    a = 0
else:
    a = 1 if u >= x1 else 2
if v > y2:
    b = 0
else:
    b = 1 if v >= y1 else 2

d = 3*b + a
dr = ["sw", "s", "se", "w", "c", "e", "nw", "n", "ne"]
r = ["((x2 - u)**2 + (y2 - v)**2)**0.5", "v - y2",
     "((x1 - u)**2 + (y2 - v)**2)**0.5", "u - x2",
     "0", "x1 - u", "((x2 - u)**2 + (y1 - v)**2)**0.5",
     "y1 - v", "((x1 - u)**2 + (y1 - v)**2)**0.5"]

print(dr[d], round(eval(r[d]), 4))

fo.close()
fi.close()
