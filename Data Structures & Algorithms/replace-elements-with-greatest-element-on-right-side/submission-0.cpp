class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size() - 1;
        int maxR = 0;
        int temp = 0;
        for (int i = n; i >= 0; i--) {
            if (i == n) {
                maxR = arr[n];
                arr[i] = -1;
            }
            else{
                temp = arr[i];
                arr[i] = maxR;
                maxR = max(arr[i], temp); 
            }

        }

        return arr;
    }
};