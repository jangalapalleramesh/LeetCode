class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
    long long total_sum = accumulate(nums.begin(), nums.end(), 0LL);  // Total sum as long long
    int target_mod = total_sum % p;

    // If total sum is already divisible by p, no need to remove anything
    if (target_mod == 0) return 0;

    // Hash map to store the prefix sum mod p and their corresponding indices
    unordered_map<int, int> prefix_map;
    prefix_map[0] = -1;  // To handle the case where the subarray starts from index 0

    long long current_sum = 0;
    int min_length = INT_MAX;

    // Traverse through the array and compute prefix sums
    for (int i = 0; i < n; ++i) {
        current_sum = (current_sum + nums[i]) % p;  // Compute current prefix sum mod p

        // We want to find a prefix sum such that (current_sum - target_mod) % p == 0
        int needed_mod = (current_sum - target_mod + p) % p;

        // Check if we have seen this needed_mod in the past
        if (prefix_map.find(needed_mod) != prefix_map.end()) {
            min_length = min(min_length, i - prefix_map[needed_mod]);
        }

        // Store the current prefix sum mod p with the current index
        prefix_map[current_sum] = i;
    }

    // If no valid subarray is found, return -1
    return (min_length == INT_MAX || min_length == n) ? -1 : min_length;
        
    }
};