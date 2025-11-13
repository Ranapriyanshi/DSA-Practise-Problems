

n, c = input().split()
n,c = int(n), int(c)

s =input()
s = s.split()

for i in range(n):
    s[i] = int(s[i])

p = []
for i in range(n-c):
    p.append(s[i+c])

for i in range(c+1):
    p.append(s[i])

for i in range (n):
    print(p[i], end=" ")