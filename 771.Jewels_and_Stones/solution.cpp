
/* Solution by Myself */
#include <cstring>

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num = 0;
        for (int i = 0; i < strlen(S.c_str());i++) {
            for (int j = 0; j < strlen(J.c_str());j++) {
                if (S[i] == J[i] ) {
                      num += 1;
                }
            }
        }
        
        return num;
    }
};


/* Solution by others 
Hash set, time complexity O(M+N) 
 */
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num = 0;
        set<char> setJ(J.begin(), J.end());
        for(char s : S) if(setJ.count(s)) 
            num++;
        return num;
    }
};
