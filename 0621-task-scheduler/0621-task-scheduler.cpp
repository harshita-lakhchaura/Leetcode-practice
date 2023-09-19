class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
         vector<int> mp(26,0);
        int max_freq=0, count_maxfreq=0, sz=tasks.size();
        for(char i:tasks){
            mp[i-'A']++;  
            if(mp[i-'A']>max_freq){
                max_freq=mp[i-'A']; 
            }
        }   
        for(int i=0;i<26;i++){
            if(mp[i]==max_freq) count_maxfreq++; 
        }
        int time= (max_freq-1)*(n+1)+count_maxfreq; 
        return max(time,sz);
    }
};