#include <iostream>
#include <algorithm>

using namespace std;
int matrix[100][100],m,n,i,j;
int TT[100],RG[100],Total;

 struct muchie
 {
   int v1;
   int v2;
   int cost;
 } List[100];


bool cmp (muchie v1,muchie v2)
{
  return v1.cost < v2.cost;
}

int main() {

    cin>>n;

    for( i=1;i<=n;i++)
    {
        for( j=1;j<=n;j++)
        cin>>matrix[i][j];
    }

    for( i=1;i<=n;i++)
     for( j=1;j<=n;j++)
     if(matrix[i][j])
     {
         m++;
         List[m].v1 =i;
         List[m].v2 =j;
         List[m].cost = matrix[i][j];
     }

      for(int i=1;i<=n;)

     for(int i=1;i<=m;i++)
      cout<<List[i].v1<<" "<<List[i].v2<<endl;

    return 0;
}
