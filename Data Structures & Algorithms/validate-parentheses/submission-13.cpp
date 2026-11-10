class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        int n = s.size();
        for(int i = 0; i<n;i++){
            if (s[i] == '(' || s [i] == '[' || s[i] == '{'){
                par.push(s[i]);
            }
            else if (par.empty()) return false;
            else if(par.top() == '(' && s[i] != ')') return false;
            else if(par.top() == '[' && s[i] != ']') return false ;
            else if(par.top()== '{' && s[i] != '}') return false ;
            else par.pop();
        }

        return par.empty();
    }
};
