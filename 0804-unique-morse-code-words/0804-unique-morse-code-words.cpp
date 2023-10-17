class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        for(int i=0;i<words.size();i++)
        {
            string st="";
            for(int j=0;j<words[i].length();j++)
            {
                st+=morse[words[i][j]-'a'];
            }
            s.insert(st);
        }
        return s.size();
    }
};