class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map <int,string> m;
        vector<int> arr;
        vector<string> res;
        for(int i=0;i<names.size();i++){
            m[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        for(int i=heights.size()-1;i>=0;i--){
             if (m.find(heights[i])!=m.end()) {
        res.push_back(m.find(heights[i])->second);
    } 
        }
        return res;
    }
};
