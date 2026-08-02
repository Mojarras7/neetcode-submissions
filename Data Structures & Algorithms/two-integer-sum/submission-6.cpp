class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> memi;

       for(int i = 0; i < nums.size(); i++){
        memi[nums[i]] = i;
       }

       for(int i= 0; i< nums.size();i++){
        int rest = target - nums[i];
        cout << rest;
        if (memi.find(rest) != memi.end() && memi[rest] != i){
             return vector<int> {i, memi[rest]};
        }

       }

       return vector<int> {};

       
    }
};
