#include <vector>
class Solution {
public:
    std::vector<int> twoSum(vector<int>& nums, int target) {
       std::vector<int> solution;
       int vectorSize = nums.size();
       
       
       for (int i = 0; i < vectorSize; i++){
           for (int j = 0; j < vectorSize; j++){
               if ( i !=j && nums.at(i) + nums.at(j)  == target){
                   solution.push_back(i);
                   solution.push_back(j);
                   return solution;
                   
               }
               
           }
           
       } 
       return solution;
       
    }
};
