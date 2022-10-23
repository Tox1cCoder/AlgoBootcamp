import sys

fi = open("input.txt")
fo = open("output.txt", "w")
sys.stdin = fi
sys.stdout = fo

n = int(input())
lf = 0
rt = min(n + 1, 2_000_000)

while rt - lf > 1:
    m = (rt + lf)//2
    s = m*(m + 1)*(m + 5)//6 - 1
    if s > n:
        rt = m
    else:
        lf = m

print(lf)

fo.close()
fi.close()
