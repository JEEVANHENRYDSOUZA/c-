class Solution:
    def isPalindrome(self, s: str) -> bool:
        newS=""
        for char in s:
            if char.isalnum():
                newS+=char.lower()#cleaning the string and converting it into lower cas and then performing the check for pallindrome
        
        
        def rec(s,left,right):
            if left>=right:
                return True
            if s[left]!=s[right]:
                return False
            left+=1
            right-=1
            return rec(s,left,right)
        
        s=newS
        return rec(s,0,len(s)-1)
