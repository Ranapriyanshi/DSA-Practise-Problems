s= input()
l = len(s)
d=0
c=0
a=0
for i in range (l):
    if s[i].isdigit():
        d+=1
    elif s[i].isalpha():
        c+=1
    else:
        a+=1
print(a,d,c, end=' ')
    