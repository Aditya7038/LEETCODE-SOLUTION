class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n = letters.size();

        int low =  0;

        int high = n-1;

        char ans = letters[0];

        for(;low<=high;){

            int mid = low + (high - low)/2;

            int val = int(letters[mid]);

            if(val > int(target)){

                ans = letters[mid];

                high = mid - 1;
            }

            else {
                low = mid + 1;
            }
        }

        return ans;

        
    }
};