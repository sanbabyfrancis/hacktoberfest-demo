# Python 3 code to demonstrate
# removing duplicate elements from the list
l = [1, 2, 4, 2, 1, 4, 5]
print("Original List: ", l)
res = [*set(l)]
print("List after removing duplicate elements: ", res)
