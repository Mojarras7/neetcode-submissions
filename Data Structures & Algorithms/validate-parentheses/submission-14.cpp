class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        int n = s.size();
        for(int i = 0; i < n;i ++ ){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') open.push(s[i]);
            else{
                if(open.empty()) return false;

                if(open.top() == '(' && s[i] != ')') return false;
                if(open.top() == '[' && s[i] != ']') return false;
                if(open.top() == '{' && s[i] != '}') return false;

                open.pop();
            }
        }

        return open.empty();
    }
};
