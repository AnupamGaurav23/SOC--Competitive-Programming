from math import ceil

for _ in range(int(input())):
    n,d= map(int, input().split())
    lo=0
    hi= n
    ans= -1
    mid= (lo+hi)//2
    while(hi>=lo):
        mid= (hi+lo)//2
        if( mid+ int(ceil((d)/(mid+1)))<=n):
            ans= mid
            hi= mid-1
        else: lo= mid+1
    if(ans==-1): print("NO")
    else: print("YES")
