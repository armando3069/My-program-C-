#include<iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

void delay(int number_of_seconds)
{

    int milli_seconds = 1000 * number_of_seconds;


    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
    int i;
    for (i = 0; i <= 10; i++) {
 if( i==1){
        cout<<endl;
        cout<<"                   * *"<<endl;
        cout<<"                    | "<<endl;
        cout<<"                    /"<<endl;
        cout<<"                 % # % "<<endl;
        cout<<"              %         %"<<endl;
        cout<<"             #     "<<i<<"     #"<<endl;
        cout<<"             #           #"<<endl;
        cout<<"              %*()*(^%$%^)"<<endl;
         sleep(2);
       }
      else if( i==2){
              cout<<endl;
              cout<<"                    *"<<endl;
              cout<<"                    | "<<endl;
              cout<<"                    /"<<endl;
              cout<<"                 % # % "<<endl;
              cout<<"              %         %"<<endl;
              cout<<"             #     "<<i<<"     #"<<endl;
              cout<<"             #           #"<<endl;
              cout<<"              %*()*(^%$%^)"<<endl;
               sleep(2);
             }
             if( i==3){
                    cout<<endl;

                    cout<<"                    | "<<endl;
                    cout<<"                    /"<<endl;
                    cout<<"                 % # % "<<endl;
                    cout<<"              %         %"<<endl;
                    cout<<"             #     "<<i<<"     #"<<endl;
                    cout<<"             #           #"<<endl;
                    cout<<"              %*()*(^%$%^)"<<endl;
                     sleep(2);
                   }
         if(i==5)
         {
             cout<<endl;
             cout<<"                    /"<<endl;
             cout<<"                 % # % "<<endl;
             cout<<"              %         %"<<endl;
             cout<<"             #     "<<i<<"     #"<<endl;
             cout<<"             #           #"<<endl;
             cout<<"              %*()*(^%$%^)"<<endl;
     cout<<endl;
           cout<<"Bratan ai belit pula !!!";
           sleep(2);
         }
         if( i==7){
                cout<<endl;

                cout<<"                 % # % "<<endl;
                cout<<"              %         %"<<endl;
                cout<<"             #     "<<i<<"     #"<<endl;
                cout<<"             #           #"<<endl;
                cout<<"              %*()*(^%$%^)"<<endl;
                 sleep(2);
               }
         else if(i==8)
         {
             cout<<endl;

             cout<<"              %         %"<<endl;
             cout<<"             #     "<<i<<"     #"<<endl;
             cout<<"             #           #"<<endl;
             cout<<"              %*()*(^%$%^)"<<endl;
           cout<<"Ugamanestiti au ramas 8 secunde !!"<<endl;
           sleep(2);
         }
         else if(i==9)
         {
             cout<<endl;



             cout<<"             #     "<<i<<"     #"<<endl;
             cout<<"             #           #"<<endl;
             cout<<"              %*()*(^%$%^)"<<endl;
           cout<<"NUuuuuu pulaaa !!!!!"<<endl;
           sleep(2);
         }
         else if(i==10)
         {
           cout<<"BOOOOOOOOOOOOOOOOOOOM"<<endl;
          cout<<"BOOOOOOOOOOOOOOOOOOOM"<<endl;
         cout<<"BOOOOOOOOOOOOOOOOOOOM"<<endl;
        cout<<"******************************"<<endl;
      cout<<" ** * ** ** *** **(*)(()*)(*(*&^&))          **** "<<endl;
      cout<<"******************************"<<endl;
    cout<<" ** * ** ** *** 89e934343554          **** "<<endl;
    cout<<"******************************"<<endl;
  cout<<" ** * ** ** *** ']][f;'']4'          **** "<<endl;
  int n=8;
  while(n){
    cout<<"****";
  }
                            sleep(2);

         }


        system("cls");
    }
    return 0;
}

/*cout<<"                 % # % "<<endl;
cout<<"              %         %"<<endl;
cout<<"             #"<<  i <<" #"<<endl;
cout<<"             #           #"<<endl;
cout<<"              %*()*(^%$%^)"<<endl;
*/
