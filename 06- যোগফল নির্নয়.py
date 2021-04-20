t = int(input())

while t!=0:
    n = input()
    m = int(n[0])
    n = n[::-1]
    o = int(n[0])
    s = m+o
    print("Sum","=",s)
    t-=1

