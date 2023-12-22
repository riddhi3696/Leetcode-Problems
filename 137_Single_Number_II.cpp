class Solution {
public:
    int singleNumber(vector<int>& arr) {
        
        for(int i=0;i<arr.size();i++){
            int c=0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    c++;
                }
            }
            if(c==1){
                return arr[i];
            }
        }
        return 1;
    }
};



