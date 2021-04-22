t = int(input())

li = []

while t!=0:
    s = input()
    li.append(s)
    t-=1

for i in li:
    if i>='A' and i<='Z':
        print("Uppercase Character")
    elif i>='a' and i<='z':
        print("Lowercase Character")
    elif i>='0' and i<='9':
        print("Numerical Digit")
    else:
        print("Special Character")
