class Solution:
    def tribonacci(self, n):
        if(n==0):
            return 0
        if(n==1):
            return 1
        if(n==2):
            return 1
        return self.tribonacci(n-1)+self.tribonacci(n-2)+self.tribonacci(n-3)
