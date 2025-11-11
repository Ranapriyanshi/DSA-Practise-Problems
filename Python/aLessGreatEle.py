n = int(input())
s = input()
s = s.split()
t = int(input())
l=[]
g=[]

for i in range(n):
    s[i] = int(s[i])

for i in range (n):
    if s[i]>= t:
        g.append(s[i])
    elif s[i]<t:
        l.append(s[i])

for i in range(len(g)):
    print(g[i], end =" ")
print()

for i in range(len(l)):
    print(l[i], end=" ")


