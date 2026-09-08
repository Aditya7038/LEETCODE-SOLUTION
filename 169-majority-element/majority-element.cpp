class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        int count = 0;
        int candidate;

        for(int i = 0; i<n;i++){

            if(count==0) {
                candidate  = nums[i];
            }
                
            if(candidate==nums[i]){ 
                count++;
            continue;// early exit , if this ran , nxt if will not gonna check 
            }

            if(candidate!=nums[i]) count--;

        }
        return candidate;
        
    }
};