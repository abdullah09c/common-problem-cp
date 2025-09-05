/***********BISMILLAHIR RAHMANIR RAHIM******************
            Author : ABDULLAH AL FUWAD
-------------------------------------------------------*/
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
#define leadingZero __builtin_clz
const int MOD = 1e9+7;
using namespace std;

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
   int maxSum = v[0];
   int currentSum = v[0];
   for (int i = 1; i < n; i++)
   {
    currentSum = max(v[i], currentSum+v[i]);
    maxSum = max(maxSum, currentSum);
   }
   cout<<maxSum<<el;
   
   return 0;
  
}