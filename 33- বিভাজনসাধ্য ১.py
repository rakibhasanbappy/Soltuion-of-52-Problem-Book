t = int(input())

while t!=0:
    a, b, c = input().split()
    a = int(a)
    b = int(b)
    c = int(c)

    for i in range(a,b+1):
        if i%c == 0:
            s = i
            break
    
    for i in range(s,b+1,c):
        print(i)
    
    print()
    t-=1
