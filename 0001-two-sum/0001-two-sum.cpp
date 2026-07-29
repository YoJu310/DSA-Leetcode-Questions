class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Hash map to store value -> index mapping
        unordered_map <int, int> valueToIndex;

        for (int i=0; i< nums.size(); i++){
            int complement = target - nums[i];

            // Check if the complement exists in the hash map
            if (valueToIndex.find(complement) != valueToIndex.end()){
                // return {i ,valueToIndex[complement]};
                return {valueToIndex[complement], i};
            }
             
            // Store current number and its index in the hash map
            valueToIndex[nums[i]] = i;
        }

        return {};
     
    }
};