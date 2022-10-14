def findPeri(a, b):
    p = 2*(a+b)
    return p

print("Enter Length and Breadth of Rectangle: ", end="")
l = float(input())
b = float(input())

res = findPeri(l, b)
print("\nPerimeter = {:.2f}".format(res))
