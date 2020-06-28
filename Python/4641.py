while 1 :
    cnt=0
    list=input().split()
    if(int(list[0])==-1) :
        break
    del list[len(list)-1]
    for i in list :
        temp=int(i)*2
        if str(temp) in list :
            cnt+=1
    print(cnt)