class Solution {
public:
    bool alfanumeric(char f){   
          if(f >= 'A' && f <= 'Z' || f >= 'a' && f <= 'z' || f >= '0' && f<='9') return true;
          else return false;
    }

    bool isPalindrome(string s) {
        
        string t = "";
        for(int i = 0; i < s.size(); i++ ){
            s[i] = tolower(s[i]);
            if(alfanumeric(s[i])){
                t += s[i];
            }
        }

        int l = 0;
        int r = t.size() - 1;
        cout << t;
        while (r > l){
        //    alfanumeric(s[r]) ? cout<< "True " << s[r] : cout << " False " << s[r];
        //    alfanumeric(s[l]) ? cout<< "True " << s[l] : cout << " False " << s[l];

            cout << "\n comparando " << t[l] << " " << t[r] << endl;
            if(t[l] != t[r]) return false;

            l ++;
            r --;
        }
        return true;
    }
};
