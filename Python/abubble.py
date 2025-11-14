def swap(arr, l1, l2):
    arr[l1], arr[l2] = arr[l2], arr[l1]


n = int(input())
s =input()
s = s.split()

for i in range(n):
    s[i] =int(s[i])

i=0
while i<=n-1:
    j=0
    while j<n-1:
        if s[j]>s[j+1]:
            swap(s, j, j+1)
        j+=1
    i+=1

for i in range(n):
    print(s[i], end=' ')
