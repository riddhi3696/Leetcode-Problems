class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        int res=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            res=res^nums[i+1];
        }
        return res;
    }
};
