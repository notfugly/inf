msg = "YES"

print("влияние длины кодового слова на объем:")
for k in range(1, 9):
    volume = len(msg) * k
    print("k =", k, "бит -> объем =", volume, "бит")

# минимальная длина для алфавита мощности M
M = 8
k_min = 0
while 2 ** k_min < M:
    k_min += 1
print("M =", M, "-> k_min =", k_min, "объем =", len(msg) * k_min, "бит")