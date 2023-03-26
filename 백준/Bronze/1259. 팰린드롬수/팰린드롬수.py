while True :
    string = list(input())
    if len(string) == 1 and string[0] == '0' : break
    compare = string[::-1]
    if string == compare : print('yes')
    else : print('no')