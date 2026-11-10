class Solution:
    def isValid(self, s: str) -> bool:
        st = [] 
        for i in s:
            if i == '[' or i == '{' or i == '(':
                st.append(i)
            elif len(st) == 0: return False
            elif st[-1] == '[' and i == ']':
                st.pop()
            elif st[-1] == '(' and i == ')':
                st.pop()
            elif st[-1] == '{' and i == '}':
                st.pop()
            else: return False

    

        return True if len(st) == 0 else False