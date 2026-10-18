def hex_to_bin(hexag):
    alphabet = '0123456789ABCDEF'

    binary = ""
    for digit in hexag:
        binary += format(alphabet.index(digit), "04b")

    while len(binary) > 1 and binary[0] == "0":
        binary = binary[1:]
    return binary

hexag = input("Введите шестнад. число: ")
print("Двоичн. число:", hex_to_bin(hexag))