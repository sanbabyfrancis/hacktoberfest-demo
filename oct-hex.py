print("Enter the Octal Number: ")
octnum = int(input())

chk = 0
i = 0
decnum = 0
while octnum!=0:
    rem = octnum%10
    if rem>7:
        chk = 1
        break
    decnum = decnum + (rem * (8 ** i))
    i = i+1
    octnum = int(octnum/10)

if chk == 0:
    i = 0
    hexdecnum = []
    while decnum != 0:
        rem = decnum % 16
        if rem < 10:
            rem = rem + 48
        else:
            rem = rem + 55
        rem = chr(rem)
        hexdecnum.insert(i, rem)
        i = i + 1
        decnum = int(decnum / 16)

    print("\nEquivalent Hexadecimal Value is: ")
    i = i - 1
    while i >= 0:
        print(end=hexdecnum[i])
        i = i - 1
    print()

else:
    print("\nInvalid Input!")
