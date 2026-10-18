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