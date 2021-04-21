t = int(input())

while t!=0:
    s = input()
    s = s.replace(' ','')
    vow = ""
    cons = ""
    for i in s:
        if 'a'<=i<='z' or 'A'<=i<='Z':
            if i in 'aeiouAEIOU':
                vow = vow +i
            else:
                cons = cons + i
    t-=1
    print(vow)
    print(cons)
