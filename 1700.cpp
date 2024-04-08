class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack <int> st;
        queue <int> q;
        int n=students.size();
        int a=n;
        int c=0;
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int d=q.size();
        while(!q.empty() && !st.empty()){
            if(q.front()==st.top()){
                st.pop();
                q.pop();
                n--;
                c=0;
            }
            else{
                int p=q.front();
                q.pop();
                c++;
                if(c>=n){break;}
                q.push(p);
            }
        }
        return n;
    }
};
