text = "Hello"
num = "12345"

print("длина текста:", len(text))
print("длина числа:", len(num))

print("текст ASCII :", len(text) * 8, "бит")
print("число ASCII :", len(num) * 8, "бит")
print("число BCD   :", len(num) * 4, "бит")

bits = 1
while 2 ** bits < 10 ** len(num):
    bits += 1
print("число в двоичном виде:", bits, "бит")