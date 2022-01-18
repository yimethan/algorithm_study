from curses.ascii import isalpha

def find_string(inputs):
    wordList = []
    word = ''
    for i in inputs:
        if isalpha(i):
            word = word + i
            # print(word)
        else:
            if word is not '':
                wordList.append(word)
            word = ''
    return wordList

inputs = "cat32dog16cow5"

string_list = find_string(inputs)
print(string_list)