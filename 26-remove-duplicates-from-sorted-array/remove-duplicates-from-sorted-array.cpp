class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        int k = n;

        int count = 0;

        for(int i =1 ; i<n;i++){

            if(nums[i]== nums[i-1] ){

                count++;
                nums.erase(nums.begin() + i); 
                n--;
                i--;
            }

        }

        return k - count;
        
    }
};