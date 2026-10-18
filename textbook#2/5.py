msg = "YES"

alph1 = {"Y": '01', "E": '11', "S": '10'}
encoded_msg1 = "".join([alph1[i] for i in msg])

alph2 = {"Y": '0', "E": '11', "S": '10'}
encoded_msg2 = "".join([alph2[i] for i in msg])

encoded = msg.encode("utf-8")
encoded_msg3 = "".join([format(b, "08b") for b in encoded])

print(len(encoded_msg1), len(encoded_msg2), len(encoded_msg3))