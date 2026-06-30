class Solution {
public:
    int maxScore(string s) {

        int ans = 0;
        int n = s.size();

        for(int i = 0; i < n - 1; i++) {

            int zeros = 0;
            int ones = 0;

            // Count zeros in left part
            for(int j = 0; j <= i; j++) {
                if(s[j] == '0')
                    zeros++;
            }

            // Count ones in right part
            for(int j = i + 1; j < n; j++) {
                if(s[j] == '1')
                    ones++;
            }

            ans = max(ans, zeros + ones);
        }

        return ans;
    }
};