n, x, y = int(input()), int(input()), int(input())
mi, ma = 0, 0
for i in [int(x) for x in input().split()]:
    if x + i > y or abs(x - i) > y:
        ma += 1
    if abs(x - i) > y:
        mi += 1
print(mi, ma)
