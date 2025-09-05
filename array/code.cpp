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
   
   int arr[] = {1, 2,3, 4, 5};
   reverse(arr, arr+5);
   for (auto &&i : arr)
   {
    cout<<i<<" ";
   }
   
   return 0;
}