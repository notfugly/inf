def bin_to_oct(binary):
    while len(binary) % 3 != 0:
        binary = "0" + binary

    octal = ""
    for i in range(0, len(binary), 3):
        octal += str(int(binary[i:i+3], 2))
    return octal

def bin_to_hex(binary):
    while len(binary) % 4 != 0:
        binary = "0" + binary

    alphabet = '0123456789ABCDEF'
    hexag = ""
    for i in range(0, len(binary), 4):
        hexag += alphabet[int(binary[i:i+4], 2)]
    return hexag

def oct_to_bin(octal):
    alphabet = '0123456789ABCDEF'

    binary = ""
    for digit in octal:
        binary += format(alphabet.index(digit), "03b")

    while len(binary) > 1 and binary[0] == "0":
        binary = binary[1:]

    return binary

def hex_to_bin(hexag):
    alphabet = '0123456789ABCDEF'

    binary = ""
    for digit in hexag:
        binary += format(alphabet.index(digit), "04b")

    while len(binary) > 1 and binary[0] == "0":
        binary = binary[1:]
    return binary

prompt = input("Введите сс из которой необходим перевод: ")
num = input("Введите число: ")
if prompt == "8":
    h = bin_to_hex(oct_to_bin(num))
    print("Число в шестнад. сс:", h)
    o = bin_to_oct(hex_to_bin(h))
    print("Проверка пройдена" if num == o else "Ошибка")
elif prompt == "16":
    o = bin_to_oct(hex_to_bin(num))
    print("Число в восьм. сс:", o)
    h = bin_to_hex(oct_to_bin(o))
    print("Проверка пройдена" if num == h else "Ошибка")
else:
    print("Неправильно, попробуйте еще раз")
