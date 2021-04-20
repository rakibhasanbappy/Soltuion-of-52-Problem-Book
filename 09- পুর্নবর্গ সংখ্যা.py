import math

t = int(input())

for i in range(t):
    n = int(input())
    s = math.sqrt(n)
    if s == int(s):
        print("YES")
    else:
        print("NO")
