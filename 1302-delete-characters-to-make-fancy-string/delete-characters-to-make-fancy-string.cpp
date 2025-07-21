class Solution {
public:
    string makeFancyString(string s) {
            int n = s.size();
        if (n < 3) return s;

        string result;
        result.reserve(n); // Avoids reallocation

        result.push_back(s[0]);
        result.push_back(s[1]);

        for (int i = 2; i < n; ++i) {
            if (s[i] == result.back() && s[i] == result[result.size() - 2]) {
                continue; // Skip if three consecutive same characters
            }
            result.push_back(s[i]);
        }

        return result;
    }
};