class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        if (nums.size() > 0) {
            k = nums.size() - 1;
        } else {
            return 0;
        }
        int i = 0;
        while (i < k) {
            if (nums[i] == val) {
                while (nums[i] == nums[k] && k >i) {
                    k--;
                }
                cout << nums[i] << " swaping " << nums[k] << endl;
                swap(nums[i], nums[k]);
            }
            i++;
            
        }
        for(auto h:nums) cout <<h;
            
        int j = 0;
        for (j; j < nums.size(); j++) {
            if (nums[j] == val) break;
        }
        return j;
    }
};