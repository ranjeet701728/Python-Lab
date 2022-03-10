unit=int(input("the enter value ")) 
if(unit<=100):
    pa=unit*1
    print( pa)
elif(unit<=200):
    pa=100*1+(unit-100)*2
    print(pa)
elif(unit<=300):
    pa=100*1+(100)*2+(unit-200)*3
    print(pa)
elif(unit>300):
    pa=100*1+100*2+(300-200)*3+((unit-300)*4)
    print(pa)






    