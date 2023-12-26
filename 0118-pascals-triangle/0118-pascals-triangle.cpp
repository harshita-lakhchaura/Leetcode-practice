class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
        
        if(numRows==0) return {};
        if(numRows==1) return {{1}};
        
        vector<vector<int>>pascal=generate(numRows-1);
        vector<int>temp(numRows,1);
        for(int i=1;i<numRows-1;i++)
        {
            temp[i]=pascal.back()[i-1]+pascal.back()[i];
        }
        pascal.push_back(temp);
        return pascal;
    }
};