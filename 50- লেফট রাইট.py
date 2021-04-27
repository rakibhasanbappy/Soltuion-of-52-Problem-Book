t = int(input())

while t!=0:
    s = input()

    new_s = ""

    for i in range(len(s)):
        if s[i]=="L":
            new_s = new_s + s[i-1]
        elif s[i] == "R":
            new_s = new_s + s[i+1]
        else:
            new_s = new_s + s[i]
        
    print(new_s)
    t-=1
