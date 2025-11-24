n = int(input())
s = input()
s = s.split()
for i in range (n):
    s[i] = int(s[i])
ele, idx = input().split()
ele, idx = int(ele), int(idx)
dlt = int(input()) 

ans =[]
for i in range (idx):
    ans.append(s[i])

for i in range (idx, idx+1):
    ans.append(ele)

for i in range (idx, n):
    ans.append(s[i])

fAns =[]

for i in range(dlt):
    fAns.append(ans[i])

for i in range(dlt+1, n+1):
    fAns.append(ans[i])

for i in range(len(fAns)):
    print(fAns[i], end=" ")


