#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,v[1001];
  std::cin >> n;
  for(int i=1;i<=n;i++)
  std::cin >> v[i];

     for(int i=1;i<=n;i++)
      for(int j=i;j<=n;j++)
       if(v[i]>v[j])
         swap(v[i],v[j]);

         for(int i=1;i<=n;i++)
         std::cout << v[i] << " ";
  return 0;
}
