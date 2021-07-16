#include<iostream>
using namespace std;
int ogl(int n)
{
  int r=0;
  while (n)
  {
      r=r*10+n%10;
      n=n/10;
  }
  return r;
}


int main()
{
  int x;
  int r=0;
  cout<<"Introdu un numar"<<endl;
  cin>>x;
  ogl(x);
  int kogl = ogl(x);
  if(kogl==x)
  {
    cout<<"Numarul este oglindit"<<endl;
  }
  else
  {
    cout<<"NU este oglindit"<<endl;
  }
  cout<<"Oglinditul lui "<<x<<" : "<<kogl;
  return 0;
}
