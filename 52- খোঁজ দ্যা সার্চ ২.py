import re

t = int(input())

while t!=0:
    a,b = input().split()
    s_len = len(a)
    sub_len = len(b)
    c = 0
    for i in range(0, s_len-sub_len+1):
        if a[i:i+sub_len] == b:
            c+=1
    
    print(c)
    t-=1


