/***********BISMILLAHIR RAHMANIR RAHIM******************
            Author : ABDULLAH AL FUWAD
-------------------------------------------------------*/
// https://leetcode.com/problems/maximum-subarray/submissions/1760301075/

#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
#define leadingZero __builtin_clz
const int MOD = 1e9+7;
using namespace std;

int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];
   int currentSum = nums[0];
   for (int i = 1; i < n; i++)
   {
    currentSum = max(nums[i], currentSum+nums[i]);
    maxSum = max(maxSum, currentSum);
   }
   return maxSum;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
   }
   cout<<maxSubArray(v)<<el;
   return 0;
}