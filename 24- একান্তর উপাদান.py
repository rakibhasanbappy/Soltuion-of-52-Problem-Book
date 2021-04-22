t = int(input())

while t!=0:
    n = int(input())
    x = [int(x) for x in input().split(" ")]
    c=0
    for i in x:
        if c%2==0:
            if(c<len(x)-2):
                print(i,end=" ")
            else:
                print(i,end="")
        c+=1
    print()
    t-=1
