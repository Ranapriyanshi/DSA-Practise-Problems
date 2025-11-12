n = int(input())
s = input()
s = s.split()
l  = len(s)
ar =[]
for i in range(l):
    if s[i] not in ar:
        ar.append(s[i])

for i in range(len(ar)):
    print(ar[i], end=" ")
