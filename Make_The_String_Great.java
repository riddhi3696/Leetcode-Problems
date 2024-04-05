class Solution 
{
public:
    string makeGood(string s) 
    {
        for(int i=s.length()-1;i>0;i--)
        {
            if(abs(s[i]-s[i-1])==32)
            {
                s.erase(i-1,2);
                i++;
            }
                
        }

        return s;
    }
};
