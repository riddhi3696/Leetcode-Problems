#include<algorithm>

class Solution {
public:
    int gcd(int a, int b){
        int m=0;
        for(int i=1;i<=min(a,b);i++){
            if(a%i==0 && b%i==0){
                m=i;
                if(m<i){
                    m=i;
                }
            }
        }
        return m;
    }
    int nthMagicalNumber(int n, int a, int b) {
        long long int d=a*b/gcd(a,b);
        long long int start=min(a,b);
        long long int end=n*start;
        long long int mid,c;
        while(start<end){
            mid= start+(end-start)/2;
            c= mid/a+mid/b-mid/d;
            if(c<n){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        int mod=1e9+7;
        return start%mod;

    }
};
