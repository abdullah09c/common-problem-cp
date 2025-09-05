/***********BISMILLAHIR RAHMANIR RAHIM******************
            Author : ABDULLAH AL FUWAD
-------------------------------------------------------*/
// https://leetcode.com/problems/majority-element/
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
#define leadingZero __builtin_clz
const int MOD = 1e9+7;
using namespace std;


int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        pair<int, int> ans{0, 0};
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if(nums[i] == nums[i-1]) {
                cnt++;
            }
            else{
                if(cnt > ans.second) {
                    ans.first = nums[i-1];
                    ans.second = cnt;
                }
                cnt = 1;
            }
        }
        if(cnt > ans.second) {
                    ans.first = nums[n-1];
                    ans.second = cnt;
                }
        return ans.first;
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
   cout<<majorityElement(v)<<el;
   
   
   return 0;
}