#include <set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // bool hasDuplicates = false;

        // vector<int> local;

        // for(int num : nums) {
        //     int elements_count = count(local.begin(), local.end(), num);

        //     if(elements_count > 0) {
        //         hasDuplicates = true;
        //         break;
        //     }

        //     local.push_back(num);
        // }

        // if(hasDuplicates) {
        //     return true;
        // }

        // return false;

        set<int> unique_numbers(nums.begin(), nums.end());

        if(unique_numbers.size() != nums.size()) {
            return true;
        }

        return false;
    }
};