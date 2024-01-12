class Solution {
public:
    bool isPalindrome(int x) {
       if (x < 0 ) {
           return false;
       } 
       std::vector<int> digitVec;
       while (x>0){
           digitVec.push_back(x%10);
           x/=10;

       }
       for (int i = 0; i< digitVec.size();i++){
           if (digitVec.at(i)!=digitVec.at(digitVec.size()-i-1)){
               return false;
           }

       }
       return true;
    }
};
