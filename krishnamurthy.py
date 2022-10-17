import math

Number = int(input("Enter the Number to Check Krishnamurthy Number = "))
Temp = Number
Sum = 0

while Temp > 0:
    fact = 1
    i = 1
    rem = Temp % 10
    fact = math.factorial(rem)
    Sum = Sum + fact
    Temp = Temp // 10

if Sum == Number:
    print("\n%d is a Krishnamurthy Number." %Number)
else:
    print("%d is Not a Krishnamurthy Number." %Number)
