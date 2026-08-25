class Solution {
public:
    void reverseString(vector<char>& s) {

          int size = s.size()-1;

          int j = size;

          for (int i = 0;;){

            if(i>=j) break;

            swap(s[i],s[j]);

            i++;
            j--;



          }
        
    }
};