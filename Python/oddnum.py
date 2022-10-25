class Solution:
   def solve(self, n):
      if n == 0:
         return 0
         sum = 1
         count = 0
         temp = 1
         while(count<n-1):
            temp += 2
            sum += temp
            count += 1
         return sum
ob = Solution()
print(ob.solve(7))
