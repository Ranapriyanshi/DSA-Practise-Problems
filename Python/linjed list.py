n = int(input())
s = input()
s = s.split()

for i in range(n+1):
    s[i] = int(s[i])

a =[]
for i in range(n):
    a.append(s[i])

b = a[::-1]
print(b, end =" ")
