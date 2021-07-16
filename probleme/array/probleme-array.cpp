#include<iostream>
using namespace std;
int main()
{
 int n,v[1001];
 int max=-1;
 int min = 100000001;
 cin>>n;
 for(int i=1;i<=n;i++)
 cin>>v[i];

for(int i=1;i<=n;i++)
{

   if(v[i] > max)
   max=v[i];

   if(v[i] < min)
   min=v[i];

}

int imax=0;
int imin=0;

for(int i=1;i<=n;i++)
{
  if(max==v[i])
  imax=i;

  if(min==v[i])
  imin=i;

}
    int pozMax=0;
    int pozMin=0;
    if(imax > imax)
    {
      pozMax=imax;
        pozMin=imin ;
    }

    else if(imax < imin)
    {
     pozMax=imin;
        pozMin=imax;
    }


for(int i=pozMin;i<=pozMax;i++)

  cout<<v[i]<<" ";


  return 0;
}
