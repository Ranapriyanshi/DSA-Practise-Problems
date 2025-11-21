s = input()
l = len(s)
st =""
for i in range (l):
    if s[i].isupper():
        st += s[i].lower()
    elif s[i].islower():
        st += s[i].upper()
    elif s[i]==' ':
        st+=" "
    
print(st)