b = input("Введите второе восьм. число: ")[::-1]
a = input("Введите первое восьм. число: ")[::-1]
base = 8

borrow = 0
res = []

for i in range(len(a)):
    da = int(a[i]) - borrow
    db = int(b[i]) if i < len(b) else 0
    if da < db:
        da += base
        borrow = 1
    else:
        borrow = 0
    res.append(str(da - db))

while res[-1] == "0": res = res[:-1]

print("Разность:", "".join(reversed(res)))