class Solution {
public:
    int minimumLength(string s) {
        int l = 0;
        int r = s.size() - 1;

        if(s.size()==1){
            return 1;
        }

        while (l <= r && s[l] == s[r]) {
            if(l==r){ return 1;}
            char c = s[l];
            while (l <= r && s[l] == c) l++;
            while (l <= r && s[r] == c) r--;
            
        }
      
        return ( r - l + 1);
    }
};
