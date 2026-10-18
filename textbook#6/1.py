a = input("Введите первое двоичное число: ")[::-1]
b = input("Введите второе двоичное число: ")[::-1]

carry = 0
res = []

for i in range(max(len(a), len(b))):
    da = int(a[i]) if i < len(a) else 0
    db = int(b[i]) if i < len(b) else 0
    s = da + db + carry
    res.append(str(s % 2))
    carry = s // 2
if carry:
    res.append("1")

print("Сумма:", "".join(reversed(res)))