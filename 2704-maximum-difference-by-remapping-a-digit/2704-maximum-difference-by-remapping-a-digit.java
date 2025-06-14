class Solution {
    public int minMaxDifference(int num) {
        String numStr = String.valueOf(num);
        int maxVal = Integer.MIN_VALUE;
        int minVal = Integer.MAX_VALUE;

        // Try remapping each digit to '9' for max
        for (char digit = '0'; digit <= '9'; digit++) {
            String replaced = numStr.replace(digit, '9');
            int value = Integer.parseInt(replaced);
            maxVal = Math.max(maxVal, value);
        }

        // Try remapping each digit to '0' for min
        for (char digit = '0'; digit <= '9'; digit++) {
            String replaced = numStr.replace(digit, '0');
            int value = Integer.parseInt(replaced);
            minVal = Math.min(minVal, value);
        }

        return maxVal - minVal;
    }
}
