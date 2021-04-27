t = int(input())

import math

while t!=0:
    a,b,c = input().split()
    a = int(a)
    b = int(b)
    c = int(c)

    s = (a+b+c)/2

    su = math.sqrt(s*(s-a)*(s-b)*(s-c))

    print("Area =","{:.3f}".format(su))

    t-=1
