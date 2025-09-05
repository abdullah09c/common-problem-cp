/***********BISMILLAHIR RAHMANIR RAHIM******************
            Author : ABDULLAH AL FUWAD
-------------------------------------------------------*/
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1760118213/

#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
#define leadingZero __builtin_clz
const int MOD = 1e9 + 7;
using namespace std;

int removeDuplicates(vector<int> &nums)
{
        int n = nums.size();
        int idx = 1;
        for (int i = 1; i < n; i++)
        {
                if (nums[i] != nums[i - 1])
                {
                        nums[idx++] = nums[i];
                }
        }
        int deleteElement = n - idx;
        nums.erase(nums.end()-deleteElement, nums.end());
        return idx;
}

int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
                cin >> v[i];
        }
        removeDuplicates(v);

        return 0;
}