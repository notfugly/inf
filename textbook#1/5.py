from math import log2


p = [0.6, 0.3, 0.1]

i = -sum(pi * log2(pi) for pi in p)
print(i)
# источник предсказуем, энтропия относительно мала