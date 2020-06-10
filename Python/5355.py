T=int(input())

while T :
    T-=1
    uInput=input().split(" ")
    ans=float(uInput[0])
    for i in range(1, len(uInput)) :
        if uInput[i]=='@' :
            ans*=3
        elif uInput[i]=='%' :
            ans+=5
        elif uInput[i]=='#' :
            ans-=7
    print("%.2f" % ans)
