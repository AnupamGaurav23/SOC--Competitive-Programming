def solve(n,arr,brr):
    arr= [[arr[i], brr[i]] for i in range(n)]
    arr.sort()
    # brr.sort()
    brr= [e[1] for e in arr]
    for e in arr: print(e[0], end=" ")
    print()
    for e in brr: print(e, end=" ")
    print()
    return 69







for _ in range(int(input())):
    n= int(input())
    arr= list(map(int, input().split()))
    brr= list(map(int , input().split()))
    solve(n,arr,brr)
