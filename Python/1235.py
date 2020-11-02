N = int(input())
inputs = []
idx=1
result=0
sw=False

for i in range(N) :
    inputs.append(input())

list = []

for i in range(0, len(inputs[0])) :
    sw=False
    for j in range(N) :
        if inputs[j][-(i+1):] in list :
            sw=True
            break
        else :
            list.append(inputs[j][-(i+1):])
    if not(sw) :
        break

print((i+1))