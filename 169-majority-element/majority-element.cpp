class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        if(n==1 || n==2) return nums[0];


        int x ;

        if(n%2==0) x = n/2;

        else x = (n/2) + 1;

        int count = 1;

        int temp;


        for(int i =0;i<x;i++){

            count = 1;

            for (int j = i+1 ; j< n;j++){

                if(nums[i]==nums[j]) count++;

                if(count>n/2)  {
                    temp = nums[i];

                    return nums[i];
                    break;
                    }

            }

        }

        return nums[temp];




        
    }
};