
class Solution {
public:
    int find(int f[]) {
        int maxCount = 0;

        for(int i = 0; i < 256; i++) {
            maxCount = max(maxCount, f[i]);
        }

        return maxCount;
    }
    int characterReplacement(string s, int k) {
        int n = s.size();

        int low = 0;
        int res = 0;
        int f[256] = {0};

        for(int high = 0; high < n; high++) {
            f[s[high]]++;

            int len = high - low + 1;
            int maxCount = find(f);
            int diff = len - maxCount;

            while(diff > k) {
                f[s[low]]--;
                low++;

                len = high - low + 1;
                maxCount = find(f);
                diff = len - maxCount;
            }
            len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};
