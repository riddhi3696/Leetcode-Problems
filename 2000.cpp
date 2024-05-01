class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j;
        int flag=0;
        string a;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                j=i;
                flag=1;
                break;
            }
        }
        if(flag==0){ return word;}
        for(int i=j;i>=0;i--){
            a.push_back(word[i]);
        }
        for(int i=j+1;i<word.size();i++){
            a.push_back(word[i]);
        }
        return a;
    }
};
