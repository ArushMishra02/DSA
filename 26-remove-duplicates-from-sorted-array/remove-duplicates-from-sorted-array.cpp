class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n=nums.size();
        int low=0;
        int res=1;
        int high=1;

        while(high<n){
            if(nums[low]==nums[high]){
                high++;
                continue;
            }
            else{
                 nums[low+1]=nums[high];
                high++;
                low++;
                res++;
            }
        }
        return res;
    }
};