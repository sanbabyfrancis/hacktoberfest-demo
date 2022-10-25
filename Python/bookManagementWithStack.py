stack=[]
top=None

def addbooks(b):
    stack.append(b)
    top=len(stack)-1

def removebooks():
    if len(stack)==0:
        return None
    else:
        book=stack.pop()
        return book
        top=len(stack)-1
def isempty():
    if stack==[]:
        return True
def display():
    top=len(stack)-1
    print(stack[top],"<--")
    for a in range(top-1,-1,-1):
        print(stack[a])

while True:
    print("")
    print("|||||||||||||||||||\\\\\\\\\\\||||||||||||||||||")
    print("Enter 1 to  add a book details.")
    print("Enter 2 to delete book details.")
    print("Enter 3 to display book details.")
    print("Enter 4 to quit.")
    print("||||||||||||||||||||\\\\\\\\\\\|||||||||||||||||||")
    print("")
    print("____________________________________")

    op=int(input("Enter your option:::::    "))
    print("____________________________________")

    if op ==1:
        i=int(input("Enter the book id::::   "))
        n=input("Enter the book name::::   ")
        w=input("Enter the author:::    ")
        x=[i,n,w]
        addbooks(x)
        print("Book added!!!")
    if op==2:
        if isempty():
            print("It's EMPTY..")
        else:
            removebooks()
            print("Book removed!!!")
    if op==3:
        if isempty():
             print("It's EMPTY..")
        else:
            display()
    if op==4:
        print("Thankyou!!!")
        break
    
