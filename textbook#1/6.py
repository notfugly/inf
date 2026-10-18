from math import log2

import numpy as np
n = 8
np.random.seed(67)
vals = np.random.random(n)
print(type(vals))
p = vals / np.sum(vals)

for i in range(8):
    print("Сообщение", i + 1, p[i])

i1 = -sum(pi * log2(pi) for pi in p)
i2 = log2(8)

print(i1, i2)
# рандомная энтропия, макс энтропия