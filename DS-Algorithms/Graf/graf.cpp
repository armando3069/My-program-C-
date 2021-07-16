/*
 Reprezenatarea grafurilor cu matrice adicenta
 citirea din fisier
*/

#include<iostream>
#include <fstream>

using namespace std;
int a[20][20];

ifstream fin ("graf.txt");

int main() {

 int n,i,j;
  fin >> n;

  while(fin >> i >> j)
    a[i][j] = a[j][i] = 1;

    //afisare graf
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }

  return 0;
}
