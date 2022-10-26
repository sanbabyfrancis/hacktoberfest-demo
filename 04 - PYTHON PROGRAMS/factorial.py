def factorial(n):
  f=1
  for i in range(1,n+1):
    f*=i
  return f
num=int(input("Enter the number : "))
res=factorial(num)
print("\n Factorial : ",res)
