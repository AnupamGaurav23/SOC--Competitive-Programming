import sys as sys

a= input()
b= input()
c= input()
d= input()
l=[a,b,c,d]
for i in range(3):
    for j in range(3):
        cnt=0
        if l[i][j]=="#": cnt+=1
        if l[i+1][j+1]=="#": cnt+=1
        if l[i][j+1]=="#": cnt+=1
        if l[i+1][j]=="#": cnt+=1
        if(cnt>=3 or cnt<=1) :
            print("YES")
            sys.exit()
print("NO")
