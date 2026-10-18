def bin_to_hex(binary):
    while len(binary) % 4 != 0:
        binary = "0" + binary

    alphabet = '0123456789ABCDEF'
    hexag = ""
    for i in range(0, len(binary), 4):
        hexag += alphabet[int(binary[i:i+4], 2)]
    return hexag

binary = input("Введите двоичное число: ")
print("Шестнад. число:", bin_to_hex(binary))