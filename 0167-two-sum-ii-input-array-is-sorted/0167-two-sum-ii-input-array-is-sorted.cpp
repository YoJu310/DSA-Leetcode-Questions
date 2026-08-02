class Solution {
public:
    int binarySearch (vector <int> & numbers, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (numbers[mid] ==  target)
                return mid;
            
            else if (numbers[mid] < target)
                start = mid + 1;

            else 
                end = mid - 1;
        
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        for (int i =0 ; i<n ; i++) {
            int remaining = target - numbers[i];
             
            int index =  binarySearch (numbers, i+1 , n-1, remaining);

            if (index != -1){
                return {i+1, index+1};
                // i+1, index+1 bcoz arr is 1-indexed
            }


        }
         
    return {};   
    }
};