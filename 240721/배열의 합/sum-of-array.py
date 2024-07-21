a = 4
list_a = []
for _ in range(0,a):
    list_a.append(list(map(int,input().split(" "))))

for i in range(0,a):
    sum1 = 0
    for j in range(0,a):
        sum1 += list_a[i][j]
    print(sum1)