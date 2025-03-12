// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {
//         int n = nums.size();
//         int pos = 0, neg = 0;

//         for(int i=0; i<n; i++){
//             if(nums[i] > 0){
//                 pos++;
//             }
//             else if(nums[i] < 0){
//                 neg++;
//             }
//             else{
//                 continue;
//             }
//         }

//         return max(pos, neg);
//     }
// };

//Binary Search

class Solution{
public:
int maximumCount(vector<int>& nums){
    int n = nums.size();
    int left = 0;
    int right = n-1;

    while(left<=right){
        int mid = left + (right-left) /2;
        if(nums[mid] > 0){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    int pos = n - left;

    left = 0;
    right = n-1;

    while (left <= right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] < 0) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  int neg = right + 1;

  return max(pos, neg);

}
};