class Solution {
public:
    int multi(vector<int> &carry)
    {
        int ans =1 ;
        for(int &i:carry)
            ans*=i;
        return ans ;
    }
    string countOfAtoms(string f) {

        vector<int> carry = {1};

        map<string,int> mp;

        int cnt  = 1;

        int i = f.length()-1;

        while(i>=0)
        {
            if(f[i] == ')')
            {
                carry.push_back(cnt);
                cnt = 1;
            }
            else if(f[i] == '(')
                carry.pop_back();
            else if(isdigit(f[i]))
            {
                cnt = f[i--]-'0';
                while(isdigit(f[i]))
                    cnt += (f[i--]-'0')*10;
                i++;
            }
            else
            {
                string s = "";

                while(!isupper(f[i]))
                    s = f[i--] + s;

                s = f[i] + s;

                mp[s] += cnt*multi(carry);
                cnt = 1;
            }
            i--;

        } 

        string ans = "";

        for(auto i:mp)
                ans += i.first + ((i.second>1)?to_string(i.second):"");

        return ans;
    }
};
