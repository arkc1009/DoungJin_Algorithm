def agediscrim(age) :
    if int(age)<19 :
        return '청소년'
    elif int(age)>=65 :
        return '노인'
    else :
        return '성인'

def factorial(num) :
    if num==1 :
        return 1
    else :
        return (num*factorial(num-1))

print(factorial(int(6)))

def multiplication_table(num) :
    for i in range(1, 10) :
        print("{} x {} = {}".format(num, i, num*i))

multiplication_table(int(input()))

def star(num) :
    for i in range(num) :
        for j in range(i+1) :
            print("*", end="")
        print()

star(int(input()))