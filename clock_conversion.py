lst= "12p01p02p03p04p05p06p07p08p09p10p11p12p01p02p03p04p05p06p07p08p09p10p11p"
pst=[]
for i in range(len(lst)):
    if lst[i]=='p': pst.append(lst[i-2:i])

def solve(s):
    hr= s[:2]
    mt= s[3:]
    hrint= int(hr)
    q=""
    q+= pst[hrint]
    q+=":"
    q+=mt
    if(hrint>11): q+=" PM"
    else: q+= " AM"
    return q


for _ in range(int(input())):
    s= input()
    print(solve(s))
