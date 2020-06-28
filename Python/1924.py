month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
ans = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]
x, y=input().split()

day=0

for i in range(1, int(x)) :
    day+=month[i-1]

day+=int(y)
chk=day % 7

print(ans[chk-1])