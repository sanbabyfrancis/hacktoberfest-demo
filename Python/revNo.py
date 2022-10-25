a=int(input())
rev=0
while a>0:
    m=a%10
    rev=rev*10+m
    a=a//10
print("reverse of a",rev)    
