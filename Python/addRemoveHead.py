n = int(input())
s = input()
s = s.split()
l = len(s)

a=[]
if l == n:
    for i in range (l-1):
        a.append(s[i])
        print(a[i], end=" ")

