#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while(n>0) //O(logN)
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n=n/10;
    // }

    for (int i = 0; i < n; i=i*2)
    {
        cout<<i<<endl;
    }
    
    return 0;
}