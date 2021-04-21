t = int(input())

import re

while t!=0:
    s = input()
    l = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    for i in range(len(l)):
        result = re.findall(l[i],s)
        if len(result):
            print(l[i],"=",len(result))
    if t>1:
        print()
    t-=1
