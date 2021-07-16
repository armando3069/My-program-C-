#include<iostream>
using namespace std ;
int main()
{
    int max=0;
    int min=1000000;

  int n,v[1001];
    cin>>n;

    for(int i=1;i<=n;i++)
        cin>>v[i];

    for(int i=1;i<=n;i++)
    {
        if(v[i]>max)
        max=v[i];

        if(v[i]<min)
            min=v[i];
    }

    int diferenta= max-min;
    //// max-min
    int ctr=0;
    for(int i=1;i<=n;i++)
    {
       if(diferenta==v[i])
        {
           ctr++;
        }

    }
    cout<<ctr;

    return 0;
}
