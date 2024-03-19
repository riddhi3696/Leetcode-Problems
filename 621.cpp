class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(int i=0;i<tasks.size();i++){
            freq[tasks[i]-'A']++;
        }
        sort(freq.begin(),freq.end());
        int chunk=freq[25]-1;
        int idle=n*chunk;
        for(int i=24;i>=0;i--){
            idle=idle-min(chunk,freq[i]);
        }
        if(idle<0){
            return tasks.size();
        }
        else{
            return tasks.size()+idle;
        }
        return 0;
    }
};
