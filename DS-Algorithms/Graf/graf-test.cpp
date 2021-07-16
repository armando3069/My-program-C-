#include<iostream>
#include<fstream>
using namespace std;

ifstream fin ("date.in");

void printi(int x[100][100],int  & n);

int main()
{

 int a[100][100];
 int n;
 cout<<"hdsad";
  fin>>n;
  for(int i=1;i<=n;i++)
   for(int j=1;j<=n;j++)
   fin>>a[i][j];  
   
   
    return 0;
}

void print(int x[100][100],int n)
{
   for(int i=1;i<=n;i++)
   {
     for(int j=1;j<=n;j++)
    {
      cout<<x[i][j]<<" ";
    }
    cout<<endl;
   }
   
     
}
