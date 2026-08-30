class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        int n = arr.size();

        bool flag1 = false;
        bool flag2 = false;


        int i = 0;
        int j = n-1;

        if(n<3) return false;

        for(;i<n;){

            if(arr[i+1]>arr[i]) i++;
            else break;
        }
         for(;j>0;){

            if(arr[j-1]>arr[j]) j--;
            else break;
        }

        if( i ==0) return false;
        if(j==n-1) return false;

        if(i==j) return true;


        return false;


        
    }
};