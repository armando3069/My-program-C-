//
//  main.cpp
//  hello world
//
//  Created by Armando Buruian on 27.04.2021.
//

#include <iostream>
#include <cmath>
using namespace std;

int a[100][100];
int n,m,i,j;

int main() {

    cin>>n;



    for( i=1;i<=n;i++)
        for( j=1;j<=n;j++)
            a[i][j]=0;
    while (cin>>i>>j) {
        a[i][j] = a[j][i] = 1;
    }


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
