r = int(input())

s =input()
s = s.split()
m = []
sum =0
for i in range(r):
    s[i] = int(s[i])
    sum+=s[i]
    m.append(s[i])

for i in range(r):
    print(m[i], end=' ')
print()

print("{:.3f}".format(sum/r))