#include<iostream>
#include <vector>
 using namespace std;
 int money[]={1,5,10,20,500,1000};
 int siz = sizeof(money)/sizeof(money[0]);
 void ATM(int n){
   vector<int>ans;
   for(int i=siz-1;i>=0;i--){
     while (n>=money[i]) {
       n-=money[i];
       ans.push_back(money[i]);
     }
   }
   for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" ";
   }
 }
   int main(int argc, char const *argv[]) {
     int x;
     cout<<"introdu o suma :";
     cin >> x;
     cout<<"Suma "<<x<<" lei : ";
     ATM(x);

   return 0;
 }
