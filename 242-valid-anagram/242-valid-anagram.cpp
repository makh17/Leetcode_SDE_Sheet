class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //very   very easy approach
        if(s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        // can be done using hashing
//         if (s.size()!=t.size()) return false;
// 		unordered_map <char, int> umap;
//         for (char c:s) umap[c]++;
//         for(char c:t) {
//             umap[c]--;
//             if (umap[c]<0) return false;
//         }
        
//         return true;
    }
};

