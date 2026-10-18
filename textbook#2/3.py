msg = "YES"
encoded = msg.encode("utf-8")
print(encoded)

binary = [format(b, "08b") for b in encoded]
print(binary)
print("объем кодирования в байтах", len(msg))
print("объем кодирования в битах", len(msg) * 8)