a=1
b=1
while 1 :
    a,b=input().split(" ")
    if int(a)==0 and int(b)==0 :
        break
    if int(a) > int(b) :
        print("Yes")
    else :
        print("No")