class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
        queue<pair<int,int>>pq;
        unordered_set<int>st;
        st.insert(x);
        pq.push(make_pair(0,x));
        while(!pq.empty())
        {
            int cnt=pq.front().first;
            int node=pq.front().second;
            pq.pop();
            if(node==y)
                return cnt;
            if(st.find(node+1)==st.end())
            {
                pq.push({cnt+1,node+1});
                st.insert(node+1);
            }
            if(st.find(node-1)==st.end() && node-1>=0)
            {
                pq.push({cnt+1,node-1});
                st.insert(node-1);
            }
            if(node%11==0 && st.find(node/11)==st.end())
            {
                pq.push({cnt+1,node/11});
                st.insert(node/11);
            }
            if(node%5==0 && st.find(node/5)==st.end())
            {
                pq.push({cnt+1,node/5});
                st.insert(node/5);
            }
        }
        return -1;
    }
};