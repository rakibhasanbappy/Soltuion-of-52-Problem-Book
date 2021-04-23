t = int(input())

while t!=0:
    a, b, c = input().split()
    a = int(a)
    b = int(b)
    c = int(c)

    for i in range(1,c+1):
        if i%a==0 and i%b==0:
            print(i)
    
    if t>1:
        print()
    t-=1
