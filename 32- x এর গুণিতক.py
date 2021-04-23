t = int(input())

while t!=0:
    a, b = input().split()
    a = int(a)
    b = int(b)
    if a>b:
        print("Invalid!")
    else:
        for i in range(a,b+1,a):
            print(i)
    

    print()
    t-=1
