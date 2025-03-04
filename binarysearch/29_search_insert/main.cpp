#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int ans = -1;
        while (l <= r) {
            long long mid = l + (r-l)/2;

            if (nums[mid] == target) return mid;

            if (nums[mid] > target) {
                ans = mid;
                r = mid - 1;
            }

            else l = mid + 1;
        }

        return ans == -1 ? nums.size() : ans;
    }
};