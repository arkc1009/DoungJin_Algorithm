import sys

asd = sys.stdin.read()
ans=asd.replace("BUG", "")

while ans.find('BUG') !=-1 :
    ans = ans.replace("BUG", "")

print(ans)