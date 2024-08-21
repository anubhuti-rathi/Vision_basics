import sys
string='madame'
m=len(string)//2
for i in range(m+1):
    if string[i]!=string[-(i+1)]:
        print('not palindrome')
        sys.exit(1)
print('palindrome')