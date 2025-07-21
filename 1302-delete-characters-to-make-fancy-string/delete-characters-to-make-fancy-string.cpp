class Solution {
public:
    string makeFancyString(string s) {
            string result;

    for (char c : s) {
        int len = result.length();
        // Check if the last two characters are the same as current
        if (len >= 2 && result[len - 1] == c && result[len - 2] == c) {
            continue; // skip this character
        }
        result += c;
    }

    return result;
    }
};