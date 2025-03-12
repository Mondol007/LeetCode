class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int pos = 0, neg = 0;

        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                pos++;
            }
            else if(nums[i] < 0){
                neg++;
            }
            else{
                continue;
            }
        }

        if(pos > neg){
            return pos;
        }
        else{
            return neg;
        }
    }
};