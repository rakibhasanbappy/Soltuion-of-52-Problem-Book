t = int(input())

for i in range(t):
    x = int(input())

    p = [6,28,496,8128,33550336,8589869056,137438691328,2305843008139952128]

    for j in p:
        if j>=1 and j<=x:
            print(j)
    if(i<t-1):
        print()
    

