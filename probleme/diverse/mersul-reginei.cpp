#include<iostream>
#include <unistd.h>
using namespace std;
int main()
{
    int matrix[100][100];
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++)
         cin>>matrix[i][j];


   for(int k=1;k<=n;k++)
    for(int g=1;g<=m;g++)
   {
      if(k==g)
      matrix[k][g]= 1;

     for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++){
            cout<<matrix[i][j]<<" ";
          }
            cout<<endl;
         }
         if(k==g)
         {
           sleep(3);
         }
         system("cls");
         matrix[k][g]=0;

        }

    return 0;
}
