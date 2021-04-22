t = int(input())

while t!=0:
    s = input()
    for i in s:
        print(ord(i)-64,end="")
    t-=1
    print()
