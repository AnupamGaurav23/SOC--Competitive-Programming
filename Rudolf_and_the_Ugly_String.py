for _ in range(int(input())):
    n= int(input())
    s= input()
    ct=0
    for i in range(1,n-1):
        if s[i]=='i' and s[i-1]=='p' and s[i+1]=='e': ct+=1
        elif s[i]=='a' and s[i-1]=='m' and s[i+1]=='p': ct+=1
    for i in range(2,n-2):
        if s[i]=="p" and s[i-1]=="a" and s[i-2]=="m" and s[i+1]=="i" and s[i+2]=="e": ct-=1
    print(ct)
