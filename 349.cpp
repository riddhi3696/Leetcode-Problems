class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int> ans;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                 if(ans.empty() || nums1[i]!=ans.back()){
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j] && i<nums1.size() && j<nums2.size()){
                j++;
            }
            else {
                i++;
            }
        }
        
        return ans;
    }
};
