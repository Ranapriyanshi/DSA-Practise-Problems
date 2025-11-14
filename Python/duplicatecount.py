s = input()
s.split()
arr =[]
l = len(s)
for i in range(l):
    if s[i] not in arr:
        arr.append(s[i])
l2 = len(arr)
c = [0 for _ in range(l2)]

for i in range(l):
    for j in range(l2):
        if s[i] == arr[j]:
            c[j]+=1

for i in range (l2):
    print(arr[i], end="")
    print( c[i],end="")