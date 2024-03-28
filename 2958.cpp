class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       int i=0;
       int j=0;
       int c=0;
       unordered_map <int,int> mp;

       while(j<nums.size()){
        mp[nums[j]]++;
        while(mp[nums[j]]>k && i<j){
            mp[nums[i]]--;
            i++;
        }
        c=max(c,j-i+1);
        j++;
       } 
       return c;
    }
};
