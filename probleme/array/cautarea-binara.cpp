#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {

  int n,x,v[101];
  cin>>n;
  for(int i=1;i<=n;i++)
  cin>>v[i];
  cout<<"x :"; cin>>x;
  bool ok = false;
   int st=1; int dr = n;
   while (st<=dr)
   {

     int mij = (st+dr)/2;
     if(v[mij] == x)
     {
        ok= true;
        break;
     }

        else if (v[mij] < x)
          st = mij+1;

           else
           dr = mij-1 ;
   }

   if(ok)
   cout<<"Gasit !!! ";

   else
   cout<<"Nu";


  return 0;
}
