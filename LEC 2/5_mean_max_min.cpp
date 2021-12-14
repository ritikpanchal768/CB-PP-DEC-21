#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int sum=0,mini=INT_MAX,maxi=INT_MIN;
    while(i<n)
    {
        int a;
        cin>>a;
        sum=sum+a;
        if(a>maxi)
        {
            maxi=a;
        }
        if(a<mini)
        {
            mini=a;
        }
        i++;
    }
    cout<<"sum :"<<sum<<endl<<"minimum :"<<mini<<endl<<"maximum :"<<maxi<<endl;
    return 0;
}