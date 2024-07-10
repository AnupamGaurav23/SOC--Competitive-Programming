alpha= "0abcdefghijklmnopqrstuvwxyz"
def solve(n):
    if n==3: return "aaa"
    if n<=28:
        s="aa"
        s+= alpha[n-2]
        return s
    if n<=53:
        s="a"
        s+= alpha[n-27]
        s+="z"
        return s
    s=""
    s+= alpha[n-52]
    s+="zz"
    return s


for _ in range(int(input())):
    n= int(input())
    print(solve(n))
