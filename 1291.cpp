#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int seq[9], big[9], inc[9];
    vector<int> ans;
    void dfs(int start, int d, int end){
        int end0=min(end, big[d]);
        for (int x=start; x<=end0; x+=inc[d])
            ans.push_back(x);
        if (d<8)
            dfs(seq[d+1], d+1,  end);       
    }

    vector<int> sequentialDigits(int low, int high) {
        if (low>123456789) return {};
        int d0=log10(low), d1=log10(high); 
        seq[0]=1, big[0]=9, inc[0]=1;
        for (int i=1; i<9; i++){
            seq[i]=10*seq[i-1]+(i+1);
            inc[i]=10*inc[i-1]+1;
            big[i]=big[i-1]+(9-i)*pow(10, i);
        }

        // Find low0 = min number x with sequential digits x>=low
        int low0;
        if (low<=big[d0]){
            low0=seq[d0]+((int)(low/pow(10, d0)-1))*inc[d0];
            if (low0<low) low0+=inc[d0];
        }
        else {
            d0++;
            low0=seq[d0];
        }
       
    //    cout<<"d0="<<d0<<" , low0="<<low0<<" , d1="<<d1<<endl;

        dfs(low0, d0, high);
        return ans;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
