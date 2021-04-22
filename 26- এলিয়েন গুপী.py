t = int(input())

while t!=0:
    x = float(input())
    c=0
    while x>=1:
        c+=1
        x = x/2
    
    print(c, "days")
    t-=1
