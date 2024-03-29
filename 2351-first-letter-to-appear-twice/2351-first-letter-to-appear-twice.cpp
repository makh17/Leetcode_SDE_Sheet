class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> v(26);
        for(auto c:s){
            if(v[c-'a']) return c;
            v[c-'a'] = true ;
        }
        return 'a';
    }
};