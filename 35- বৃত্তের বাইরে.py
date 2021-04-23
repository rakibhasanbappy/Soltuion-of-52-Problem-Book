t = int(input())

import math

while t!=0:
    a, b = input().split()
    a = float(a)
    b = float(b)
    r = float(input())
    x, y = input().split()
    x = float(x)
    y = float(y)

    d = math.sqrt(pow((x-a), 2)+pow((y-b), 2))

    if d>r:
        print("The point is not inside the circle")
    else:
        print("The point is inside the circle")
    
    t-=1
