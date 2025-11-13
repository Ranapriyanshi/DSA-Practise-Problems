n = int(input())
s = input().split()

max = float('-inf')
sec = float('-inf')
for i in range (n):
    s[i] = int(s[i])
    if(max<s[i]):
        sec = max
        max = s[i]
    elif (s[i]>sec  and s[i]!=max):
        sec = s[i]

if sec==float('-inf'):
    print("No second element exists.")
else:
    print(sec)
