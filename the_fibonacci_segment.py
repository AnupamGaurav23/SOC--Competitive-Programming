n,maxi,cnt= int(input()),0,2
arr= list(map(int, input().split()))
if(n<=2): print(n)
else:
    for i in range(2,n):
        if arr[i]==arr[i-1]+ arr[i-2]:cnt+=1
        else: cnt=2
        maxi = max(maxi, cnt)
    print(maxi)
