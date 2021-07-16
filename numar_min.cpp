#include<iostream>
using namespace std;
int main()
{
    int n,dif=0;
    cin>>n;
    int minN=100000;

    if(n>1 && n<10000)
    {

     while(n!=0)
     {
         if(n%10 < minN)
         {
             minN = n%10;
         }

         n=n/10;
     }

     cout<<"Min : "<<minN<<endl;

    }
    return 0;

}
