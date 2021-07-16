#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
int sum(int n)
{
  if(n==0)
   return 0;

   else{
    for(int i=1;i<=n;i++)
    {
      cout<<i<<" ";
    }
    cout<<endl;
    n--;
    sum(n);

}
}



int sum1(int n)
{
  if(n==0)
  return 0;

  else
   for(int i=n;i>=1;i--)
   {
     cout<<i<<" ";
   }
   cout<<endl;
   n--;
   sum1(n);
}

int sum2(int n)
{
for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

      return 0;

}

int main(int argc, char const *argv[]) {

  int n;
  cin>>n;
  sum(n);
  sleep(3);
  sum2(n);
  sleep(3);
  sum1(n);
  sleep(2);
   sum(n);


  return 0;
}
