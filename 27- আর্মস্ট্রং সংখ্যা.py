t = int(input())

while t!=0:
    s = input()
    y = int(s)
    x = 0
    for i in s:
        n = int(i)
        x = x + pow(n, 3)
    if x==y:
        print(y,"is an armstrong number!")
    else:
        print(y,"is not an armstrong number!")

    t-=1


