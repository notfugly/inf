a = input("Введите первое число: ")[::-1]
b = input("Введите второе число: ")[::-1]
base = int(input("Введите основание сс: "))

carry = 0
res = []

for i in range(max(len(a), len(b))):
    da = int(a[i]) if i < len(a) else 0
    db = int(b[i]) if i < len(b) else 0
    s = da + db + carry
    res.append(str(s % base))
    carry = s // base
if carry:
    res.append("1")

print("Сумма:", "".join(reversed(res)))

# Проверка
c = "".join(res)

borrow = 0
res.clear()

for i in range(len(c)):
    dc = int(c[i]) - borrow
    db = int(b[i]) if i < len(b) else 0
    if dc < db:
        dc += base
        borrow = 1
    else:
        borrow = 0
    res.append(str(dc - db))

while res[-1] == "0": res = res[:-1]

print("Разность суммы и второго числа:", "".join(reversed(res)))
print("Проверка пройдена" if a == "".join(res) else "Ошибка")