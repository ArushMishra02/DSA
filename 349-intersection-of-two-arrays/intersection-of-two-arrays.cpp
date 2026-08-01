class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> s;
        unordered_set<int> ans;

        for (int num : nums1) {
            s.insert(num);
        }

        for (int num : nums2) {

            if (s.find(num) != s.end()) {
                ans.insert(num);
            }

        }

        return vector<int>(ans.begin(), ans.end());
    }
};