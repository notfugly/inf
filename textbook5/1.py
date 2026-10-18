def bin_to_oct(binary):
    while len(binary) % 3 != 0:
        binary = "0" + binary

    octal = ""
    for i in range(0, len(binary), 3):
        octal += str(int(binary[i:i+3], 2))
    return octal

binary = input("Введите двоичное число: ")
print("Восьм. число:", bin_to_oct(binary))