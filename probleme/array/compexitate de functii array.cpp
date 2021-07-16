#include<iostream>
using namespace std;
int main()
{
  int n,v[101];
  cin>>n;
  for(int i=1;i<=n;i++)
  cin>>v[i];
   cout<<endl;
   cout<<"Sirul inversat :"<<endl;
  for(int i=n;i>=1;i--)
  {
    cout<<v[i]<<" ";
  }
   cout<<endl;
 int pare=0;
 int pozpare = 0;
 for(int i=1;i<=n;i++)
 {
  if(v[i] % 2 == 0)
  pare+=v[i];

 }

for(int i=1;i<=n;i++)
{
 if(v[i] % 2 == 0)
  pozpare+=i;
}

 int ctr_div=0;
 for(int i=1;i<=n;i++)
 {
   if(v[i] % 10 == 0)
   {
     ctr_div++;
   }
 }
 int sum_impare=0;
 for(int i=1;i<=n;i++)
 {
   if(i % 2 == 1 && v[i] % 3 == 0)
   {
         sum_impare+=v[i];
   }

 }

cout<<"Suma numerelor pare : "<<pare<<endl;
cout<<"Suma pozitilor numerelor pare : "<<pozpare<<endl;
cout<<"Numere divizibile cu 10 : "<<ctr_div<<endl;
cout<<"Suma numerelor divizibile cu 3 pe pozitii impare : "<<sum_impare<<endl;

  return 0;
}
