from math import log2


p = [0.2, 0.2, 0.2, 0.2, 0.2]

i1 = -sum(pi * log2(pi) for pi in p)
i2 = log2(5)
print(i1, i2)
# результат энтропии и формулы хартли равны, т.к. события равновероятны