class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lb;
        vector<int> rb;

        int z, m=0, water = 0;
        int min=0;
        
        lb.push_back(0);
        for(int i=0;i<height.size()-1;i++){
                if(height[i]>m){
                   m=height[i];                
                   }
                lb.push_back(m);
            }
        
        for (int i = 0; i < lb.size(); i++){
            cout<<lb[i]<<' ';
        }

        int m1=0;
        for(int i=height.size()-1;i>=0;i--){
             if(height[i]>m1){
                   m1=height[i];                
                   }
                rb.push_back(m1);
        }

        reverse(rb.begin(), rb.end());
        rb.push_back(0);





        for (int i = 0; i < height.size(); i++) {
            if (lb[i] < rb[i]) {
                z = lb[i];
            }
            else{
                z= rb[i];
            }
           if(z>0 && z-height[i]>0){
water += z- height[i];
           }
            
        }

        return water;
    }
};
