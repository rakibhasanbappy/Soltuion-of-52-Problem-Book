n = int(input())

li = ()

while n!=0:
    s = int(input())
    li = li + (s,)
    n-=1

list = sorted(li)
list = tuple(list)

if li==list:
    print("YES")
else:
    print("NO")

