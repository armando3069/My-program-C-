#include<iostream>
using namespace std;

int main(){

int vector[]={2,5,4,1,3};
int marime = 5;
int tmp;
mare = vector[1] , Pmare=1;
 for(int k= marime;k>1;k--)
 {
   for(int i=1;i<=k;k++)
   {
     if(vector[i] > mare)
     {
       mare= vector[i];
       Pmare = 1;
       tmp = vector[mare],vector[Pmare]= vector[k];
       vector[k] = tmp;
     }
   }
 }

return 0;

}
