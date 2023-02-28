class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()==3)
          return accumulate(nums.begin() , nums.end() , 0);
           long long int closestSum = INT_MAX;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target) {
                    return target;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
                if (abs(sum - target) < abs(closestSum - target)) {
                    closestSum = sum;
                }
            }
        }

        return closestSum;
    }
};
