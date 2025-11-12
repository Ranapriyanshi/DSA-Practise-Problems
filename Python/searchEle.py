n =int(input())
s = input()
s = s.split()
tar = int(input())

a = 0
for i in range(n):
    s[i] = int(s[i])

for i in range (n):
    if s[i] == tar:
        a +=1

if a==0:
    print("false")
else:
    print("true")