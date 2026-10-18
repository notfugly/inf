def oct_to_bin(octal):
    alphabet = '0123456789ABCDEF'

    binary = ""
    for digit in octal:
        binary += format(alphabet.index(digit), "03b")

    while len(binary) > 1 and binary[0] == "0":
        binary = binary[1:]

    return binary

octal = input("Введите восьмеричное число: ")
print("Двоичн. число:", oct_to_bin(octal))