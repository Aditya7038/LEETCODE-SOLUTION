class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        int n = arr.size();

        if(n<=2) return false;

        bool flag1 = false;

        bool flag2 = false;

        for (int i = 0;i<n-1; ){

           

            if(arr[i+1]>arr[i]){

                if (flag2 == true) return false;

                flag1 = true;
                if(i+1==n-1) return false;

                i++;
            }

            else{

                flag2 = true;

                if(flag1 == false) return false;

                if(arr[i+1]>=arr[i]) return false;
                else i++;

            }
        }

        return true;
    }
};