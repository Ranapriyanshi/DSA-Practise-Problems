s = input()
s = s.split()

t = input()

l = len(s)
index =-1
str =""
for i in range(l):
    if s[i] == t:
        index = i

for i in range(l):
    if index ==i:
        str +=""
    else:
        str += s[i]
    str+=" "

print(str)