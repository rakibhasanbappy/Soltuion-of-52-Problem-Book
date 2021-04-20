t = int(input())

for i in range(t):
    a, b, c = [int(x) for x in input().split()]

    small = a
    if b<small and b<c:
        x = a
        a = b
        b = x
    elif c<small and c<b:
        x = a
        a = c
        c = x

    if c<b:
        x = b
        b = c
        c = x

    print("Case",i+1,end="")
    print(":",a,b,c)


