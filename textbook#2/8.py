import math

def entropy(freqs):
    total = sum(freqs.values())
    H = 0
    for f in freqs.values():
        p = f / total
        H -= p * math.log2(p)
    return H

# 1) текст
text = "AAABBC"
freqs = {}
for c in text:
    freqs[c] = freqs.get(c, 0) + 1
H = entropy(freqs)
print("текст:", text)
print("частоты:", freqs)
print("энтропия H =", round(H, 4))
print("ASCII L = 8, избыточность =", round(8 - H, 4))

# 2) цифры
digits = "1234567890"
freqs = {}
for c in digits:
    freqs[c] = freqs.get(c, 0) + 1
H = entropy(freqs)
print()
print("цифры:", digits)
print("энтропия H =", round(H, 4))
print("BCD L = 4, избыточность =", round(4 - H, 4))

# 3) равномерный алфавит мощности M
print()
print("равномерный алфавит:")
for M in [2, 4, 8, 16, 32, 64]:
    H = math.log2(M)
    L = 0
    while 2 ** L < M:
        L += 1
    print("M =", M, "H =", round(H, 4), "L =", L, "избыточность =", round(L - H, 4))

# 4) цифры при разных способах
print()
print("цифры 0..9:")
H = math.log2(10)
print("энтропия H =", round(H, 4))
print("BCD L = 4, избыточность =", round(4 - H, 4))
print("оптимальный двоичный L =", round(H, 4), "избыточность = 0")