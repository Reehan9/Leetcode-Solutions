class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        double max_avg = INT_MIN;

        // Calculate the sum for the first window
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        max_avg = sum / k;

        // Slide the window and update sum and max_avg
        for (int i = k; i < n; ++i) {
            sum -= nums[i - k]; // Remove the first element of the previous window
            sum += nums[i]; // Add the new element in the current window
            max_avg = max(max_avg, sum / k);
        }

        return max_avg;
    }
};
