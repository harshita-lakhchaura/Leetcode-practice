class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> vect;
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                vect.push_back(str);
                str = "";
            }else{
                str += s[i];
            }
        }
        vect.push_back(str);

        map<string,char> reverseMap;
        map<char,string> map;
        
        if(pattern.length() != vect.size())
            return false;
        
        for(int i=0;i<pattern.length();i++){
            if(map.count(pattern[i]) && map[pattern[i]] != vect[i]){
                return false;
            }
            if(reverseMap.count(vect[i]) && reverseMap[vect[i]] != pattern[i]){
                return false;
            }
            map.insert(pair<char,string>(pattern[i],vect[i]));
            reverseMap.insert(pair<string,char>(vect[i],pattern[i]));
        }
        return true;
    }
};