#1
number = 5

#2
text = "Hello World"

#3
print(text)

#4
print(text[6])

#5
print(text[-1])

#6
print(len(text))

#7
print(type(text))

#8
shift = 3

#9
print(shift)

#10
print(type(shift))

#11
alphabet = "abcdefghijklmnopqrstuvwxyz"
print(alphabet)

#12
alphabet.find(text[0])

#13
### Commented For Future Executions
# index = alphabet.find(text[0])
# print(index)

#14
print(text.lower())

#15
index = alphabet.find(text[0].lower())
print(index)

#16
shifted = alphabet[index+shift]

#17
print(shifted)

#18
for i in text:
    print(i)
    