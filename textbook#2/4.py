alph = {"Y": '01', "E": '11', "S": '10'}
alph = {val: key for key, val in alph.items()}
print(alph)

encoded_msg = '011110'
n = len(encoded_msg)
msg = ''
for i in range(0, n, 2):
    char = alph[encoded_msg[i:i+2]]
    msg += char

print(msg, encoded_msg)