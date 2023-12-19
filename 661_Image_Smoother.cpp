class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
         vector<vector<int>> m(img.size(), vector<int>(img[0].size(), 0));
        for(int i=0;i<img.size();i++){
            for(int j=0; j<img[0].size();j++){
                int c=0;
                int sum=0;
                  for (int x=i-1; x<=i+1; x++) {
                       for (int y=j-1; y<=j+1; y++) {
                        if(x>=0 && x<img.size() && y>=0 && y<img[0].size()){
                            sum+=img[x][y];
                            c++;
                        }                    
            }
        }
        m[i][j]=sum/c;

    }
        }
        return m;

    }
};