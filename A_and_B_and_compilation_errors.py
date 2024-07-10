n= int(input())
arr= list(map(int, input().split()))
brr= list(map(int, input().split()))
crr= list(map(int, input().split()))
arr.sort()
brr.sort()
crr.sort()
a,b= -1,-1
for i in range(n-1):
    if brr[i]!= arr[i]:
        a= arr[i]
        break
if a==-1: a= arr[-1]
for i in range(n-2):
    if crr[i]!= brr[i]:
        b= brr[i]
        break
if b==-1: b= brr[-1]
print(a)
print(b)
