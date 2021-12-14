#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<2<<" ";
    int i=3;
    while(i<=n)
    {
        int j=2;
        while(j<i)
        {
            if(i%j==0)
            {
                break;
            }
            if(j==i-1)
            {
                cout<<i<<" ";
            }
            j++;
        }
        i++;
    }
    return 0;
}