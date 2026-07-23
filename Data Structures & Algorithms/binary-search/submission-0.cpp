class Solution {
public:
    int search(vector<int>& nums, int target) {
        int max = nums.size() - 1;
        int min = 0;
        for(int i; i <nums.size(); i++ ){
            int avg = ((max-min)/2) + min;
             if(nums[avg] == target){
                return avg;
             } else if(nums[avg] > target){
                max = avg - 1;
             }else{
                min = avg + 1;
             }
        }
        return -1;
    }
};
