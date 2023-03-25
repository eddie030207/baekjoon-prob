a = list(map(int, input().split()))
b = list(input())
c = b[0]+b[1]+b[2]
for i in range(3):
    print(a[0]*int(b[2-i]))

print(a[0]*int(c))
