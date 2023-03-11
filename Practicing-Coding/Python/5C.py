import math

print("Enter 1 for 1st pattern")
print("Enter 2 for 2nd pattern")
print("Enter 3 for 3rd pattern")
print("Enter 4 to exit")
c = eval(input("Enter your Choice: "))
if c == 1:
    n1=eval(input("Enter the No. of rows: "))
    for i in range (1,n1+1):
        for j in range (1,n1+1):
            if i==j or i+j==n1+1:
                print("$",end=" ")
            elif i==1 or i==n1 or j==1 or j==n1:
                print("*",end=" ")
            else:
                print (" ",end=" ")
        print()
if c == 2:
     
     n2=eval(input("Enter the No. of rows: "))
     k=65+n2
     for i in range (0,n2):
         for j in range(-1*(n2-1),n2):
             if i<=abs(j):
                 ch=abs(j)+1
                 print(chr(k-ch),end=" ")
             else:
                 print (" ",end=" ")
         print()
if c == 3:
    n3=eval(input("Enter the No. of rows: "))
    for i in range (1,n3+1):
        for k in range (1,(n3-i)+1):
            print (" ",end=" ")
        for j in range (1,i+1):
            print(j,end=" ")
        print()    

     
             


























































    
