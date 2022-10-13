def findGCD(n1, n2):
    gcd = 0
    for i in range(1, int(min(n1, n2)) + 1):
        if n1 % i == 0 and n2 % i == 0:
            gcd = i
    return gcd
num1, den1 = map(int, list(input("Enter numerator and denominator of first number : ").split(" ")))
num2, den2 = map(int, list(input("Enter numerator and denominator of second number: ").split(" ")))
lcm = (den1 * den2) // findGCD(den1, den2)
sum = (num1 * lcm // den1) + (num2 * lcm // den2)
num3 = sum // findGCD(sum, lcm)
lcm = lcm // findGCD(sum, lcm)
print(num1, "/", den1, " + ", num2, "/", den2, " = ", num3, "/", lcm)
