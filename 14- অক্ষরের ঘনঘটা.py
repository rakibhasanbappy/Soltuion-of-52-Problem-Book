t = int(input())

import re

while t!=0:
    s = input()
    l = input()
    result = re.findall(l,s)
    length = len(result)
    if length>0:
        print("Occurrence of","'",end="")
        print(l,end="")
        print("'","in","'",end="")
        print(s,end="")
        print("'","=",length)
    else:
        print("'",end="")
        print(l,end="")
        print("'","is not present")

    t-=1


