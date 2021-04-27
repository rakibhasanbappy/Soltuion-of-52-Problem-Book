t = int(input())

import math

while t!=0:
    p,q,c = input().split()
    p = int(p)
    q = int(q)
    c = int(c)

    s = pow(p, q)
    s = s%c

    print("Result =",s)

    t-=1
