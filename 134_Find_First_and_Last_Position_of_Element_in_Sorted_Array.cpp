class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> c;
int x=-1; int y=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                x=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                y=i;
                break;
            }
        }
        
        c.push_back(x);
        c.push_back(y);
        return c;
    }
};
