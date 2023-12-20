class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int rem=-1;
        int max=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]+prices[j]<=money){
                    rem=money-(prices[i]+prices[j]);
                    if(max<rem){
                      max=rem;
                    }
                    
                }
            }
        }
        if(rem==-1){
            return money;
        }
        return max;
    }
};
