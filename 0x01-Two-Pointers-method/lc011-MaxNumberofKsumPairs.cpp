class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ranges::sort(nums);

        int start = 0, end = nums.size()-1, cnt = 0;
        while(start < end){
            if((nums[start] + nums[end]) == k)
                cnt++, start++, end--;
            
            else if((nums[start] + nums[end]) > k)
              end--;
            else
                start++;
        }

        return cnt;
    }
};