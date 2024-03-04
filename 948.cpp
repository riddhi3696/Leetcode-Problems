class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int left=0;
        int right=tokens.size()-1;
        int res=0;
        int score=0;

        while(left<=right){
            if(power>=tokens[left]){
              power-=tokens[left];
              score+=1;
              res=max(res,score);
              left+=1;
            }
            else if(score>=1){
                power+=tokens[right];
                score-=1;
                right-=1;
            }
            else{
                break;
            }
        }
        return res;
    }
};
