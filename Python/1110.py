N=input()

if int(N) < 10:
    N += '0'

clone='0'
added=0
cnt=0

while N!=clone :
    if cnt == 0 :
        added = int(N[0]) + int(N[1])
        clone = N[1] + str(added % 10)
    else :
        added = int(clone[0]) + int(clone[1])
        clone = clone[1] + str(added % 10)
    cnt+=1

print(cnt)
