#include <iostream>
#include <cstring>
using namespace std;
char a[100];
int n,x[100];


void tipar()
{
    int i;
    for(i=1;i<=n;i++)
    cout<<a[x[i]];
    cout<<endl;
}

int valid (int k)
{
int i;
for(i=1;i<k;i++)
if(x[i]==x[k])
return 0;
return 1;

}

void back (int k)
{
    int i;
    if(k==n+1)
    tipar();

    else
    for(i=0;i<n;i++)
    {
        x[k]=1;
        if(valid(k))
        back(k+1);
    }
}




int main() {
  cin>>a;
  n = strlen(a);
  back(1);
  return 0;
}
