class Solution {
public:
    vector<int> arr;
    int climbStairs(int n) {
        for(int i=0;i<=n+1;i++){
            arr.push_back(-1);
        }
        return cal(n+1,arr);
    }
private:
    int cal(int n,vector<int> &arr){
        int a,b;
        if(n<=1){
            return n;
        }
        if(arr[n]!=-1){
            return arr[n];
        }
        a=cal(n-1,arr);
        b=cal(n-2,arr);
        arr[n]=a+b;
        return a+b;
    }
};
