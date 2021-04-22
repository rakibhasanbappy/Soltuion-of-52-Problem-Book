t = int(input())

for i in range(t):
    x = int(input())

    p = [6,28,496,8128,33550336,8589869056,137438691328,2305843008139952128]

    if x in p:
        print("YES, {} is a perfect number!".format(x))
    else:
        print("NO, {} is not a perfect number!".format(x))
    
