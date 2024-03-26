class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector <bool> ans(nums.size()+1,false);

        for(int i=0;i<nums.size();i++){
            if(nums[i]<=nums.size() && nums[i]>0){
                ans[nums[i]]=true;
            }
        }

        for(int i=0;i<ans.size();i++){
            if(i>0 && ans[i]==false){
                return i;
            }
        }

        return nums.size()+1;
    }
};
