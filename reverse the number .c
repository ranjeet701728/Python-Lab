x=int(input('the enter value  '))
rev=0
while (x>0):
    rem=x%10
    rev=(rev*10)+rem
    x=x//10
print('reverse number is',rev)


