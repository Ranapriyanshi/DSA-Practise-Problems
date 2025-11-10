s = input()
s = s.split()

t = input()
ans =""
l = len(s)

count =0
for i in range( l):
    if count ==0:
        if s[i] == t:
            ans+=""
            count+=1
    else:
        ans+=s[i]

print(ans)


