/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int cnt=0;
        int left = 0;
        int right = nums.size()-1;

        while (left <= right)
        {
            int mid = (left+right)/2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                left = mid+1;         
            }
            else
            {
                right = mid-1;
            }
        }

        return -1;
    }
};
