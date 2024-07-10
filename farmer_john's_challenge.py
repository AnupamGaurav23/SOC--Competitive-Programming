def solve(n,k):
    if k==n:
        for i in range(n): print(69, end=" ")
        print()
        return 69
    if k==1:
        for i in range(n): print(i+1, end=" ")
        print()
        return 69
    print(-1)
    return 69

for _ in range(int(input())):
    n,k= map(int, input().split())
    solve(n,k)
