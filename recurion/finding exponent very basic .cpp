class Solution:
    def myPow(self, x, n) :
        def helper(x,n):
            if(n<=0):
                return 1
            return x*helper(x,n-1)
            
            
        result=helper(x,abs(n))
        return result
        
        
        
        
jeevan=Solution()
print(jeevan.myPow(5,2))
