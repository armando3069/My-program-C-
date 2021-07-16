#include <iostream>

using namespace std;
int matrix[100][100],m,i,j;

 struct muchie
 {
   int v1;
   int v2;
   int w;
 } List[100];

int main() {
    int n;
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
         List[m].w = matrix[i][j];
     }

     for(int i=1;i<=m;i++)
      cout<<List[i].v1<<" "<<List[i].v2<<endl;

    return 0;
}
