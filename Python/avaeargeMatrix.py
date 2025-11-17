r,c =input().split()
r,c = int(r), int(c)

matrix =[]
sum=0
for i in range (r):
    s=input()
    s = s.split()
    for j in range(c):
        s[j] = int(s[j])
        sum+=s[j]
        matrix.append(s)

b = "{:.2f}".format((sum/(r*c)))
print(b)