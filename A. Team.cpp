#include<iostream>
using namespace std;
int main()
{
    int n;//first input line
    int problem [3];//question solve
    int count=0,sum=0;
    cin>>n;//example:3
    for(int i=1;i<=n;i++)//for n line
    {
        for(int j=0;j<3;j++)//for question
        {
            cin>>problem[j];//input n question solve
            if (problem[j]==1){
             count++;
            }
        }
        if(count>=2){
            sum++;//count 1 increase
        }
         count=0;//count 0
    }
    cout<<sum;
}
