def swap(arr, l1, l2):
    arr[l1], arr[l2] = arr[l2], arr[l1]

n = int(input())
s = input()
s = s.split()

for i in range (n):
    s[i] = int(s[i])

for i in range(int(n) if n%2 ==0 else int((n+1)/2)):
    swap(s, i, n-1-i)

for i in range (n):
    print(s[i], end =" ")

