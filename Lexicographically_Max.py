def append(st,index,i):
    if index == 100:
        st+=i
    if index == 3:
        st+='d'
    elif index == 2:
        st+='c'
    elif index == 1:
        st+='b'
    elif index==0:
        st+='a'
    return st

def findmin(L,z):
    if count[z]==0 or count[z]==1:
        ind = z
        return ind
    ind = L.index(min(L))
    return ind
    
N=8
S="aacacbbc"
count = [0]*int(N/2)
final = ""
for i in S:
    if i == 'a':
        count[0]+=1
    if i == 'b':
        count[1]+=1
    if i == 'c':
        count[2]+=1
    if i == 'd':
        count[3]+=1

for i in S:
    if(len(set(count))!=1):
        I = findmin(count,int(N/2)-1)
        if i == 'a' and count[0]>2 and count[I]<2:
            final = append(final,I,i)
            count[0]-=1
            count[I]+=1
            continue
        if i == 'b' and count[1]>2 and count[I]<2:
            final = append(final,I,i)
            count[1]-=1
            count[I]+=1
            continue
        if i == 'c' and count[2]>2 and count[I]<2:
            final = append(final,I,i)
            count[2]-=1
            count[I]+=1
            continue
        if i == 'd' and count[3]>2 and count[I]<2:
            final = append(final,I,i)
            count[3]-=1
            count[I]+=1
            continue
        else:
            final = append(final,100,i)
    else:
        final+=i
print(final)
