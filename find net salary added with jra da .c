sal=int(input("the enter value ")) 
if(sal<=10000):
    hra=(sal*80)//100
    da=(sal*90)//100
    Ta=(hra+da+sal)
    print("the salary is ",Ta)
elif(10000>sal and sal<20000):
    hra=(sal*85)//100
    da=(sal*90)//100
    Ta=(hra+da+sal)
    print("salary is ",Ta)
elif(sal<=20000):
    hra=(sal*95)//100
    da=(sal*95)//100
    Ta=(hra+da+sal)
    
    print("salary is ",Ta)
    
   

    


