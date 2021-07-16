#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,falg=0;
  int arr[1001];
  cin>>n;
   for(int i=1;i<=n;i++)
   {
     cin>>arr[i];
   }

    for(int i=1;i<=n;i++)
    {
      if(arr[i]<arr[i+1])
      {
        flag++;
      }

    }
    if(flag==0)
    {
      cout<<"Perfect";
    }
    else
    {
      cout<<"Imperfect";
    }

  return 0;
}
