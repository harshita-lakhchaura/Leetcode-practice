class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c=0,s=0;
        for(int i=0;i<students.size();i++)
        {
            if(students[i]==0)
                c++;
            else
                s++;
        }
        for(int i=0;i<sandwiches.size();i++)
        {
            if(sandwiches[i]==0 && c>0)
                c--;
            else if(sandwiches[i]==1 && s>0)
                s--;
            else if(sandwiches[i]==0 && c==0)
                return s;
            else
                return c;
        }
        return 0;
    }
};