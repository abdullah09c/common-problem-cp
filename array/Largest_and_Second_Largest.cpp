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
   
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    vector<int> v(n);
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        largest = max(largest, v[i]);
    }
    int secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if(v[i] != largest) {
            secondLargest = max(secondLargest, v[i]);
        }
    }
    
    cout<<(largest+secondLargest)<<el;


    
   }
   
   
   return 0;
}