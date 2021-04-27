t = int(input())

while t!=0:
    s = input()
    s1 = s[::-1]
    if s==s1:
        print("Yes! It is Palindrome!")
    else:
        print("Sorry! It is not Palindrome!")

    t-=1    
