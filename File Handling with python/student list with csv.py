import csv
def writetocsv():
    
    f=open("student.csv","w")
    writerobject=csv.writer(f)
    print("*****************************************************") 
    roll=int(input("Enter the rollno:: "))
    name=input("Enter your name:: ")
    mark=float(input("Enter your mark:: "))
    print("*****************************************************") 
    x=[roll,name,mark]
    writerobject.writerow(x)
    print("Single record added!!!")
    f.close()
def manyrecord():
    f=open("student.csv","w")
    writerobject=csv.writer(f)
    l=[]
    while True:
        print("*****************************************************")
        roll=int(input("Enter the rollno:: "))
        name=input("Enter your name:: ")
        mark=float(input("Enter your mark:: "))
        print("*****************************************************") 
        x=[roll,name,mark]
        l.append(x)
        print("*****************************************************") 
        op=input("Enter n to exit or y to add more records::::  ")
        print("*****************************************************")
        if op=="n":
            
            break
    writerobject.writerows(l)
    print(" Record Added!!!")
    f.close()
def display():
    f=open("student.csv","r")
    x=csv.reader(f)
    print(list(x))
    f.close()
while True:
    print("*****************************************************")
    print("Enter 1 for adding single student;")
    print("Enter 2 to add multiple student;")
    print("Enter 3 to student;")
    print("*****************************************************")
    print("*****************************************************")
    option=int(input("Enter your option:::  "))
    print("*****************************************************") 
    if option == 1:
        writetocsv()
    elif option == 2:
        manyrecord()
    elif option == 3:
        display()
    else:
        print("Sorry you did not select any option:")
    print("*****************************************************")   
    ch=input('For main menu enter "y" , To exit enter "n"::::  ')
    print("*****************************************************")
    if ch.lower()=="n":
        break

    
    
