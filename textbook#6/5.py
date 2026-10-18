a = input("Введите первое число: ")[::-1]
b = input("Введите второе число: ")[::-1]
base = int(input("Введите основание сс: "))

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