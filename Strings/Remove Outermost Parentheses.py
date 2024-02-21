class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        out  = ''
        count = -1
        f = True
        for i in s:
            if f:
                f = False
                count +=1
                continue
            if i=='(':
                out+=i
                count +=1
            if i ==')':
                count -=1
                if count == -1:
                    f = not f
                    continue
                out +=i
        return out
        
