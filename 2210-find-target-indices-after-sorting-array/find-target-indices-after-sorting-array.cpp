class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        int n = nums.size();

        int count = 0;

        int freq = 0;

        vector<int> v1;

        for(int i =0; i<n; i++){

            if(nums[i]==target) freq++;

            if(nums[i]<target)  count++;

        }

        int ans = count;

        for( ; freq !=0 ; freq--){

            v1.push_back(ans);

            ans++;
        }

        return v1;
        
    }
};