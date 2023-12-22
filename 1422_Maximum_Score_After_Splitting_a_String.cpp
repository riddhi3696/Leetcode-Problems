class Solution {
public:
    int maxScore(string s) {
        vector<int> a;
        vector<int> b;
        int zero, one, max = 0;
        int c = 0, d = 0;
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                a.push_back(++c);
            }
            else{
                a.push_back(c);
            }
        }

        for (int i =0 ; i < s.size(); i++) {
            if (s[i] == '1') {
                b.push_back(++d);
            }
            else{
                b.push_back(d);
            }
        }

        // Print the values in vector a
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;

        // Calculate max score
        for (int i = 0; i < a.size()-1; i++) {
            int zero = a[i];
            int one = b[b.size() - 1] - b[i];
            sum = zero + one;
            if (max < sum) {
                max = sum;
            }
        }

        return max;
    }
};
