# Python program to add two matrix user inputs

# take first matrix inputs
m1 = [list(map(int, input("Enter row: ").split(" ")))
      for i in range(int(input("Enter Number of rows: ")))]

# take second matrix inputs
m2 = [list(map(int, input("Enter row: ").split(" ")))
      for i in range(int(input("Enter Number of rows :")))]

# add these matrix
print("Add Matrix:")
r = [[m1[i][j] + m2[i][j]
      for j in range(len(m1[0]))] for i in range(len(m1))]
print(r)
