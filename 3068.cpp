class Solution {
public:
long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& e) {
    int n = nums.size();
    vector<int> adjList[n];
    for(int i=0; i<n-1; i++) {
        adjList[e[i][0]].push_back(e[i][1]);
        adjList[e[i][1]].push_back(e[i][0]);
}
    vector<int> temp;
    for(int i=0; i<n; i++) {
        long long value = (long long)nums[i]^k;
        if(value > nums[i])
            temp.push_back(i);
    }
    int size = temp.size();
    if(size % 2 == 0){
        long long ans = 0;
        for(int i=0; i<n; i++) {
            ans += nums[i];
        }
        for(int i=0; i<temp.size(); i++) {
            ans -= nums[temp[i]];
            long long add = (long long)nums[temp[i]]^k;
            ans += add;
        }
        return ans;
    }
    else {
        long long ans = 0;
        for(int i=0; i<n; i++) {
            ans += (long long)nums[i];
        }
        long long finalans = ans;
        for(int i=0; i<temp.size(); i++) {
            ans -= nums[temp[i]];
            long long add = (long long)nums[temp[i]]^k;
            ans += add;
        }
        for(int i=0; i<size; i++) {
            long long add = (long long)nums[temp[i]]^k;
            long long currAns = ans-add + nums[temp[i]];
            finalans = max(finalans,currAns);
        }
        vector<int> visited (n,0);
        long long sum = 0;
        for(int i=0; i<size; i++) {
            visited[temp[i]] = 1;
        }
        for(int i=0; i<n; i++) {
            if(visited[i] == 0){
                long long add = (long long)nums[i] ^ k;
                long long currAns = ans - nums[i] + add;
                finalans = max(finalans, currAns);
            }
        }
        return finalans;
    }
}
};
