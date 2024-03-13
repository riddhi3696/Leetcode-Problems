class Solution {
public:
    int pivotInteger(int n) {
        int l=1;
        int r=n;
        if(n==1){
            return 1;
        }
        while(l<r){
            int mid=l+(r-l)/2;
            if(mid*(mid+1)/2== n*(n+1)/2 - mid*(mid-1)/2){
                return mid;
            }
            else if( (mid*(mid+1)/2) > ( (n*(n+1)/2)-(mid*(mid-1)/2) )){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            }
            return -1;
    }
};
