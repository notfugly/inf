alph = {"Y": '0', "E": '11', "S": '10'}

msg = "YES"
encoded_msg = " ".join([alph[i] for i in msg])
print(msg, encoded_msg)