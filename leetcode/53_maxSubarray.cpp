class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
    if (n == 0) return -1;  // handle empty input

    int maxSum = INT_MIN, currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += nums[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) currentSum = 0;
    }

    return maxSum;
    }
};