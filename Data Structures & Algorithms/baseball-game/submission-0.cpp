class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> record;
        for(int i = 0; i< n; i++){
            if(operations[i] == "+"){
                record.push_back(record[record.size()-1] + record[record.size()-2]);
            } else if(operations[i] == "C"){
                record.pop_back();
            } else if(operations[i] == "D"){
                record.push_back(record[record.size()-1]* 2);
            }
            else record.push_back(stoi(operations[i]));
        }
        int sum = 0;
        for(int i = 0; i<record.size(); i++){
            cout<<record[i];
            sum += record[i];
        }
        
         return sum;
    
    }
};