class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int count = 0;
        int left = 0;

        // Iterate through the circular array
        for (int right = 1; right < n + k - 1; right++) {
            // If two consecutive tiles have the same color, move the left pointer
            if (colors[right % n] == colors[(right - 1) % n]) {
                left = right;
            }
            // If the window size is exactly k, increment the count
            if (right - left + 1 >= k) {
                count++;
            }
        }
        return count;
    }
};