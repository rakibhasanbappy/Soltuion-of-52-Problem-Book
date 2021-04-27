t = int(input())

while t!=0:
    n = int(input())

    if n == 0:
        print("1")
    else:
        for i in range(n,1,-1):
            print("2^",end="")
            print(i,"+ ",end="")

        print("2 + 1")

    t-=1
