class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a;
        for(int i=0;i<=nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                   break;
                }
                else if(j==nums.size()-1){
                    a=i;
                    break;
                }
            }
        }
    return a;
    }
};
