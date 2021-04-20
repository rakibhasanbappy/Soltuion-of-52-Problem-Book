t = int(input())

for i in range(t):
    a,b,c = [int(x) for x in input().split()]
    balled = 300-c
    if balled == 0:
        crr = 0
    else:
        crr = (b/balled)*6
    rr = (a-b)+1
    if c==0 or b>a:
        rrr = 0
    else:
        rrr = (rr/c)*6

    print("{:.2f}".format(crr),"{:.2f}".format(rrr))
