n =int(input())
s = input()

b = int(input())
s2 = input()

str = s+' '+s2
l = n+b
str = str.split()

for i in range (l):
    str[i] = int(str[i])
new = sorted (str)

for i in range (l):
    print(new[i], end=' ')