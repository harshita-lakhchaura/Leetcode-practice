class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int>temp(n);
        sort(deck.begin(),deck.end());
        bool skip=false;
        int i=0,j=0;
        for(;i<n;)
        {
            if(temp[j]==0)
            {
                if(!skip)
                {
                    temp[j]=deck[i];
                    i++;
                }
                skip=!skip;
            }
            j=(j+1)%n;
        }
        return temp;
    }
};