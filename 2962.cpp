class Solution {
public:

long long countSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    long long result = 0;
    
    for (int i = 0; i < n; ++i) {
        int maxElement = nums[i];
        unordered_map<int, int> frequency;
        frequency[maxElement] = 1;
        
        for (int j = i; j < n; ++j) {
            maxElement = max(maxElement, nums[j]);
            frequency[nums[j]]++;
            
            if (frequency[maxElement] >= k) {
                result += n - j;
                break;
            }
        }
    }
    
    return result;
}

};
