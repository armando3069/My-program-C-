#include<iostream>
using namespace std;

int main()
{
int n;
int n_1=1 , n_0=1 , n_2;
cin>>n;
cout<<"Sirul lui Fibonacci : ";
cout<<n_0<<" "<<n_1<<" ";

for(int i=3;i<=n;i++)
{
  n_2=n_1+n_0;
  n_0=n_1;
  n_1=n_2;

  cout<<n_2<<" ";
}
    return 0 ;
}
