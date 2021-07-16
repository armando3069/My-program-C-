#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
int a,b,x,y;
cout<<"Introduceti numerele a si b: "<<endl;
cin>>a>>b;
x=a;
y=b;
while(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }

cout<<"cmmmc = "<<(a*b)/x;
  return 0;
}
