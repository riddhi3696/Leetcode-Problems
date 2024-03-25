class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int> res;
      for(int i=0;i<nums.size();i++){
        int num=abs(nums[i]);
        int idx=num-1;
        if(nums[idx]>=0){
            nums[idx]=-nums[idx];
        }
        else{
            res.push_back(abs(nums[i]));
        }
      }
      return res;
    }
};
