#include<iostream>
#include<algorithm>

using namespace std;
struct muchie
{
    int v1;
    int v2;
    int cost;
}List[100];

 bool cmp (muchie a ,muchie b)
 {
     return a.cost < b.cost;
 }
int n,m,i,j;
int a[100][100];

int main()
{
cin>>n>>m;
for(int i=1;i<=n;i++)
{
 cin>>i>>j;
 
  List[i].v1=i;
  List[i].v2=j;
  List[i].cost=a[i][j];
}
sort(List+1,List+m+1, cmp);


  

    return 0;
}