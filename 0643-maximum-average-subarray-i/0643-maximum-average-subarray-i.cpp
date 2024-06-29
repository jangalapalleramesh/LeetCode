class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = k - 1;
        int sum = 0;

        // Calculate the sum of the first window of size k
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }

        // Initialize tempSum with the first window sum
        int tempSum = sum;

        // Slide the window across the array to find the maximum sum
        while (r < n - 1) {
            tempSum = tempSum - nums[l] + nums[r + 1];
            if (tempSum > sum) {
                sum = tempSum;
            }
            l++;
            r++;
        }

        // Calculate the maximum average
        return static_cast<double>(sum) / k;
    }
};
