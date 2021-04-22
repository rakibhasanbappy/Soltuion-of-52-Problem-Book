import math

t = int(input())

while(t!=0):
    a, b = input().split()
    a = int(a)
    b = int(b)

    g = math.gcd(a, b)

    l = (a*b)/g

    print("LCM =",int(l))

    t-=1
