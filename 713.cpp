class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      int i=0;
      int j=0;  
      int c=0;
      int pro=1;

      if(k<=1){ return 0;}

      while(j<nums.size ()){
        pro*=nums[j];
            while(pro>=k){pro/=nums[i]; i++;}
            c+=j-i+1; j++;
      }
      return c;
    }
};
