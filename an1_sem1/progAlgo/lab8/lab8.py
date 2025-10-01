# text = input("text: ")
# tabel = str.maketrans(".,:;", "    ")
# text = text.translate(tabel)
# print(text)

text = input("text: ")
dictionar = {"a":"b", "e":"f", "i":"j", "o":"p", "u":"v"}
tebel = str.maketrans(dictionar)
text=text.translate(tebel)
print(text)

