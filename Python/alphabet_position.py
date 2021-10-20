# Given a string, replace every letter with its position in the alphabet.
#
#   "a" = 1, "b" = 2

def alphabet_position(text):
    
    alphabets = 'abcdefghijklmnopqrstuvwxyz'
    
    return " ".join([str(alphabets.find(c) + 1) for c in text.lower() if c in alphabets])

text = input('Input text to get alphabet position: ')
answer = alphabet_position(text)
print(answer)


#input : "Hello"
#output : 8 5 12 12 15