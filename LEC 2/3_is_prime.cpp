#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=2;
    while(i<n-1)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"prime"<<endl;
    return 0;
}