/***********BISMILLAHIR RAHMANIR RAHIM******************
            Author : ABDULLAH AL FUWAD
-------------------------------------------------------*/
// https://leetcode.com/problems/rotate-array/submissions/1760149533/
// https://www.naukri.com/code360/problems/rotate-array_1230543?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
#define leadingZero __builtin_clz
const int MOD = 1e9+7;
using namespace std;

vector<int> rotateArray(vector<int>&arr, int k) {
    int n = arr.size();
    vector<int> ans;
    for (int i = k; i < n; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        ans.push_back(arr[i]);
    }
    arr.clear();
    arr = ans;
    return arr;
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> ans;
    for (int i = n-k; i < n; i++)
    {
        ans.push_back(nums[i]);
    }
    for (int i = 0; i < (n-k); i++)
    {
        ans.push_back(nums[i]);
    }
    
    nums.clear();
    nums = ans;
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
   int k;
   cin>>k;

//    rotateArray(v, k);

//    for (auto &&i : v)
//    {
//     cout<<i<<" ";
//    }

 rotate(v, k);
   
   
   return 0;
}