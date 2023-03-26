def palindrome(string):
    compare = [i for i in reversed(string)]

    if string == compare : return print('yes')
    else : return print('no')

while True :
    string = list(input())
    if len(string) == 1 and string[0] == '0' : break
    palindrome(string)
 