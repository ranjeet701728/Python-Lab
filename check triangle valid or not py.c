a=int(input ("enter the side a "))
b=int(input ("enter the side b "))
c=int(input ("enter the side c "))
if(a+b>c and b+c>a and c+a>b):
    print("Triangle is valid")
else:
    print("Triangle is not Valid")
    