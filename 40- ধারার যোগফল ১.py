t = int(input())

import math

while t!=0:
    x, k = input().split()
    x = int(x)
    k = int(k)

    s = 0

    for i in range(k+1):
        s = s + math.pow(x,i)
    
    print("Result =",int(s))

    t-=1
