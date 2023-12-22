class Solution {
public:
    int hammingWeight(uint32_t n) {            
            int c=0;
          while(n>0){
           int b= n&1;
            if(b==1){
                  c++;
            }
            n=n>>1;    
          }
          return c;
      }
};
