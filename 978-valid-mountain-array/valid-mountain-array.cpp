class Solution {
public:
    bool validMountainArray(vector<int>& arr) {


        int j = arr.size()-1;

        int i =0;

        bool flag1 = false;
        bool flag2 = false;

        if(arr.size()<3) return false;

        for (;i<j;){

            if(arr[i+1]>arr[i]) i++;

            else flag1 = true;

            if(arr[j-1]>arr[j]) j--;

            else flag2 = true;

            if(j==arr.size()-1) return false; // increasing arr only

            if(i == 0 ) return false; // decreasing arr only

            if (flag1 == true && flag2 == true) break;

            

        }

        if(i==j) return true;


        return false;

        
    }
};