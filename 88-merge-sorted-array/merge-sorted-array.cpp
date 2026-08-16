class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int i = m-1;
        int j = n-1;
        int k = n+m-1;

        if(m==0) {

            

            for(int l=0; l<n;l++){

            nums1[l] = nums2[l];
            }


        }

        for(;;){

            if(i<0 && j<0) break;

            else if(i<0){

                nums1[k]=nums2[j];
                k--;
                j--;
            }


            else if(j<0){

                nums1[k]=nums1[i];
                k--;
                i--;
            }


        else{
            if (nums1[i]>=nums2[j]){

                nums1[k]=nums1[i];
                i--;
                k--;

                }

            else {

                nums1[k]=nums2[j];
                j--;
                k--;

            }   
        }


        }

    }
};