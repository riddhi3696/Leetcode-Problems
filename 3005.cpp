class Solution {
public: 
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int,int> mp;
        int max=INT_MIN;
        int c=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>max){
                max=mp[nums[i]];
            }
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second==max){
                c+=i->second;
            }
        }

        return c;
    }
};
