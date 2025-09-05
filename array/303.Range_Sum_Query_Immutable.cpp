/***********BISMILLAHIR RAHMANIR RAHIM******************
            Author : ABDULLAH AL FUWAD
-------------------------------------------------------*/
// https://leetcode.com/problems/range-sum-query-immutable/

#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
#define leadingZero __builtin_clz
const int MOD = 1e9+7;
using namespace std;

vector<int> prefixSum;

void NumArray(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        nums[i] = nums[i-1] + nums[i];
    }
    prefixSum = nums;
}
    
int sumRange(int left, int right) {
    if(left > 0) return (prefixSum[right] - prefixSum[left-1]);
    return prefixSum[right];
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

   NumArray(v);
   cout<<sumRange(0, 2)<<el;
   
   
   
   return 0;
}