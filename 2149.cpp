class Solution {
public:
    vector<int> rearrangeArray(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> output(n, 0);
        int i = 0, pos = 0, neg = 1;
        while (i < n) {
            if (nums[i++] > 0) {
                output[pos] = nums[i - 1];
                pos += 2;
            } else {
                output[neg] = nums[i - 1];
                neg += 2;
            }
        }
        return output;
    }
};
