class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<long long> v1(rowIndex+1); // used long long cant return this because return type is vector<int>
        
        v1[0] = 1;

        for(int i = 0; i < rowIndex; i++){
            v1[i+1] = v1[i] * (rowIndex - i) / (i+1);   
        }

        return vector<int>(v1.begin(), v1.end());  // explicitly builds vector<int> from v1's values
    }
};