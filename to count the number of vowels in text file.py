fob=open("text.txt",'r') #use your path
count=0
str1=fob.readlines()
for word in str1:
    for s in word:
        n=len(s)
        for i in range(0,n):
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or
               s[i]=='O' or s[i]=='U' ):
                count=count+1
print('the number of vowels=',count)
