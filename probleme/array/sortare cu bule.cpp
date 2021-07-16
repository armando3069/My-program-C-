#include<iostream>
using namespace std;
int main()
{
int arr[]={6,8,3,5,7,2,9};
int size = sizeof(arr) / sizeof(arr[0]);

bool sortare;
while(!sortare){
  sortare = true;

for(int i=0;i<size;i++)
  if(arr[i] > arr[i+1])
  {
    int memory= arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=memory;
    sortare = false;
  }
}

///Afisarea//
cout<<"-------------"<<endl;
for (size_t i = 0; i < size; i++) {
  cout<<arr[i]<<" ";
}
  return 0;
}
