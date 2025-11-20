def minEle(arr, n):
    min = float('inf')
    for i in range (n):
        if arr[i]<min :
            min = arr[i]
    return min

def swap(arr, l1,l2):
    arr[l1], arr[l2] = arr[l2], arr[l1]

n = int(input())
s = input()
s = s.split()

for i in range(n):
    s[i] = int(s[i])

i =0
while i <=n-1:
    min = s[i]
    j =i+1
    while j<n:
        if s[i]>s[j]:
            swap(s, i, j)
            j+=1
        else : 
            j+=1
    i+=1

for i in range(n):
    print(s[i], end=' ')