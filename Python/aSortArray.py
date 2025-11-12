n = int(input())
s = input()
s =s.split()

newArr = []
for i in range (n):
    s[i] = int(s[i])
    newArr.append(s[i])

arr = sorted(newArr)

if arr == newArr:
    print("true")
else:
    print("false")