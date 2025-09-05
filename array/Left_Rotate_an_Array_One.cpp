/***********BISMILLAHIR RAHMANIR RAHIM******************
            Author : ABDULLAH AL FUWAD
-------------------------------------------------------*/
// https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278?leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
#define leadingZero __builtin_clz
const int MOD = 1e9+7;
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
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
   rotateArray(v, n);

   for (auto &&i : v)
   {
    cout<<i<<" ";
   }
   
   
   
   return 0;
}