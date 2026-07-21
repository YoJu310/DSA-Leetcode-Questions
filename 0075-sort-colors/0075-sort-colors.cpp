class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0, oneCount = 0, twoCount = 0;

        for (int i=0; i < nums.size(); i++){
            if (nums[i] == 0) 
                zeroCount++;
            else if (nums[i] == 1) 
                oneCount++;
            else 
                twoCount++;
        }
         
        int index = 0;

        // placing 0's
        while(zeroCount--){
            nums[index]=0;
            index++;
        }

        // placing 1's 
        while (oneCount--){
            nums[index]=1;
            index++;
        }

        // placing 2's
         while (twoCount--){
            nums[index]=2;
            index++;
        }

    }
};