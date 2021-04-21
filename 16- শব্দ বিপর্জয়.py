t = int(input())

while t!=0:
    s = input()
    s = s.split(" ")
    for i in range(len(s)):
        print(s[i][::-1],end="")
        if i<len(s)-1:
            print(" ",end="")
    print()
    t-=1
