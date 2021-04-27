t = int(input())

import math

while t!=0:
    n = int(input())
    s = 0
    for i in range(1,n+1):
        s = s + i/math.factorial(i)
    
    print("{:.4f}".format(s))

    t-=1

