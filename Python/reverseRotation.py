n,c = input().split()
n,c = int(n), int(c)
s = input()
s = s.split()
p =[]
for i in range(n):
    s[i] = int(s[i])

for i in range(c+1):
    p.append(s[n-1-c+i])

for i in range(n-c):
    p.append(s[i])

for i in range(n):
    print(p[i], end=" ")
