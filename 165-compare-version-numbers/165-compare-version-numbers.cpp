class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int n1 = version1.size();
        int n2 = version2.size();
        
        int p1, p2, r1, r2;
        
        p1 = p2 = 0;
        
        while(p1 < n1 or p2 < n2) {
            
            r1 = r2 = 0;
            
            while(p1 < n1 and version1[p1] != '.') {
                r1 = (r1 * 10) + (version1[p1] - '0');
                p1++;
            }
            
            while(p2 < n2 and version2[p2] != '.') {
                r2 = (r2 * 10) + (version2[p2] - '0');
                p2++;
            }
            
            if(r1 < r2)
                return -1;
            else if(r1 > r2) 
                return 1;
            
            p1++;
            p2++;
        }
        
        return 0;
		
}
};