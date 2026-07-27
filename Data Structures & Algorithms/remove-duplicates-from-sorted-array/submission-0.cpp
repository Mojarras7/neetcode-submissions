class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        cout << "inicial " << nums.size() << endl;
        while(i + 1 < nums.size()){
            int j = i + 1;
            cout << "Comparando " << nums[i] << " con " << nums [j] << endl;
            if(nums[i] == nums[j]){
                cout << " eliminando " << nums[i] << " en el indice " << j<< endl;
                nums.erase(nums.begin() + j);
            } else i++;
           
        }
         cout << "final" << nums.size();
        return nums.size();
    }
};