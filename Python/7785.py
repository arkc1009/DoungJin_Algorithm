n=int(input())

name=""
log=""

per = {}

while n :
    name, log=input().split(" ")
    if log=="enter" :
        per[name]=name
    else :
        del per[name]
    n-=1

list=sorted(per.keys(), reverse=True)

for nink in list :
    print(nink)