class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int c=1;
        int end=points[0][1];

        for(int i=1;i<points.size();i++){
            if(points[i][0]>end){
                c++;
                end=points[i][1];
            }
            else{ end=min(end,points[i][1]); }}
        return c;
    }
};
