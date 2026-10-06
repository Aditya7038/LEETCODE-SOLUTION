class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();

        if(n==1) {
            
           if(nums[0] == 1)return 2;
           else return 1;
        }



        int temp = n+1;

        for(int i = 0;i<n;i++){

            if(nums[i]<=0) nums[i]=temp;
        }

        int k = 0;

        for(int i = 0;i<n;i++){

            if(abs(nums[i])>0) {

                int k = abs(nums[i]);

                if(k-1>n-1) continue;

                if(nums[k-1]>=0)nums[k-1] = -1 * nums[k-1];
            }
                
        }
        int j=0;
        int flag = true;

        for(int i =0;i<n;i++){

            if(nums[i]>0){

                flag = false;
                j = i+1;
                break;
                
            }
        }

        if (flag==true) return n+1;

        return j;


    }
       
    
};