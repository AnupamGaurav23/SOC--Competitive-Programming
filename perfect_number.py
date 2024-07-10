l=[]
intu=1
while(True):
    if(len(l)>=10002): break
    suma=0
    intst= str(intu)
    for e in intst: suma+=int(e)
    if suma==10: l.append(intu)
    intu+=9

print(l[int(input())-1])
