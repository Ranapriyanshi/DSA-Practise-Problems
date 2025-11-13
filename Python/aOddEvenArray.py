n = int(input())
s = input()
s = s.split()

odd=[]
even=[]
for i in range (n):
    s[i] = int(s[i])
    if s[i]%2==0:
        even.append(s[i])
    else :
        odd.append(s[i])

l = len(odd)
l2 = len(even)

for i in range(l):
    print(odd[i], end=' ')
print()

for i in range(l2):
    print(even[i], end=' ')
