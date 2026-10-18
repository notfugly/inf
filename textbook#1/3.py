from math import log2


p = [0.4, 0.3, 0.2, 0.1]
i = -sum(pi * log2(pi) for pi in p)

print(i)
# среднее значение инф