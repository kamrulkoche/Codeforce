#include<iostream>
using namespace std;
int main()
{
    long long n,m,a;

    cin>>n>>m>>a;
    if(n%a==0&&m%a>0)
    {
        long long x=n/a;
        long long y=m/a;
        y++;
        long long sum=x*y;
        cout<<sum;
    }
    else if (n%a>0&&m%a==0)
    {
        long long x=n/a;
        x++;
        long long y=m/a;
        long long sum=x*y;
        cout<<sum;
    }

    else if (n%a>0&&m%a>0)
    {
        long long x=n/a;
        x++;
        long long y=m/a;
        y++;
        long long sum=x*y;
        cout<<sum;
    }
    else if (n%a==0&&m%a==0)
    {
        long long x=n/a;
        long long y=m/a;
        long long sum=x*y;
        cout<<sum;
    }

}
