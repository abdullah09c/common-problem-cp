/***********BISMILLAHIR RAHMANIR RAHIM******************
            Author : ABDULLAH AL FUWAD
-------------------------------------------------------*/
// https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
#define leadingZero __builtin_clz
const int MOD = 1e9+7;
using namespace std;

int isSorted(int n, vector<int> a) {
   for (int i = 0; i < n-1; i++)
   {
    if(a[i] > a[i+1]) {
        return 0;
    }
   }
   return 1;
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

   cout<<isSorted(n, v)<<el;
   
   
   return 0;
}