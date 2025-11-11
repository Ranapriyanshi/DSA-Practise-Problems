def swap_elements(array, i1, i2):
    array[i1], array[i2] = array[i2], array[i1]

n = int(input())
s = input()
s=s.split()

for i in range (n):
    s[i] = int(s[i])

for i in range(int(n/2) if n%2==0 else int((n+1)/2)):
    swap_elements(s, i, n-i-1)

for i in range (n):
    print(s[i], end=' ')
