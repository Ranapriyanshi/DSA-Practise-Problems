r,c = input().split()
r,c =int(r), int(c)

matrix1 =[]
for i in range(r):
    s = input()
    s = s.split()
    for j in range (c):
        s[j] = int(s[j])
        matrix1.append(s)

matrix2 =[]
for i in range(r):
    s = input()
    s = s.split()
    for j in range (c):
        s[j] = int(s[j])
        matrix2.append(s)

for i in range (r):
    for j in range (c):
        print(matrix1[i][j]+ matrix2[i][j], end=' ')
    print()



