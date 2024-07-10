def gcd(a,b):
    if a*b==0: return max(a,b)
    a,b= min(a,b), max(a,b)
    if b%a==0:return a
    else:return gcd(a,b%a)

def solve(a,b):
    if a==1: return b*b
    gc= gcd(a,b)
    if gc==a: return b*b//a
    return a*b//gc






for _ in range(int(input())):
    a,b= map(int, input().split())
    print(solve(a,b))
