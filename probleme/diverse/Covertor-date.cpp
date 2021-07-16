#include <iostream>
#include <cmath>
#include <unistd.h>
#include <conio.h>
using namespace std;
void kgM();
void temp();
void lung();

int show()
{

  cout<<endl;
  cout<<"                                                                                     .o8"<<endl;
  cout<<"                     .ooooo.   .ooooo.  ooo. .oo.   oooo    ooo  .ooooo.  oooo d8b .o888oo"<<endl;
  cout<<"                    d88' '#Y8 d88' `88b `888P]Y88b   `88.  .8'  d88' `88b `888""8P     888"<<endl;
  cout<<"                    888       888   888  888   888    `88..8'   888ooo888  888       888      "<<endl;
  cout<<"                    888   .o8 888   888  888   888     `888'    888    .o  888       888 ."<<endl;
  cout<<"                    `Y8bod8P' `Y8bod8P' o888o o888o     `8'     `Y8bod8P' d888b      #888"<<endl;
  cout<<endl;

  cout<<"                                         .o8                ."<<endl;
  cout<<"                                        %888              .o8"<<endl;
  cout<<"                                    .oooo888   .oooo.   .o888oo  .ooooo."<<endl;
  cout<<"                                   d88' `888  `P  )88b    888   d88' `88b"<<endl;
  cout<<"                                   888   888   .oP$888    888   888ooo888"<<endl;
  cout<<"                                   888   888  d8(  888    888 . 888    .o"<<endl;
  cout<<"                                   `Y8bod88P `Y888&8o     888   `Y8bod8P'"<<endl;
  sleep(3);
  int intrare;
  cout<<endl;
  cout<<endl;
  cout<<"                          _______                    __          __ "<<endl;
  cout<<"                         |     __|.----.-----.--.--.|  |_.---.-.|  |_.-----.---.-."<<endl;
  cout<<"                         |    |  ||   _|  -__|  |  ||   _|  _  ||   _|  -__|  _  |"<<endl;
  cout<<"                         |_______||__| |_____|_____||____|___._||____|_____|___._|"<<endl;
   cout<<endl;
   sleep(3);
cout<<"                         _______                                         __"<<endl;
cout<<"                        |_     _|.-----.--------.-----.-----.----.---.-.|  |_.--.--.----.---.-."<<endl;
cout<<"                          |   |  |  -__|        |  _  |  -__|   _|  _  ||   _|  |  |   _|  _  |"<<endl;
cout<<"                          |___|  |_____|__|__|__|   __|_____|__| |___._||____|_____|__| |___._|"<<endl;
cout<<"                                                |__|"<<endl;
cout<<endl;
sleep(3);
cout<<"                         _____                      __ "<<endl;
cout<<"                        |     |_.--.--.-----.-----.|__|.--------.-----.---.-."<<endl;
cout<<"                        |       |  |  |     |  _  ||  ||        |  -__|  _  |"<<endl;
cout<<"                        |_______|_____|__|__|___  ||__||__|__|__|_____|___._|"<<endl;
cout<<"                                            |_____| "<<endl;

   intrare=getch();
   system("cls");
   switch (intrare) {
     case 49:
   kgM();
     break;

     case 50 :
   temp();
     break;

     case 51 :
     lung();
     break;
   }
}

void kgM()
{
 cout<<"Selectati tipul de date intrare :"<<endl;
 cout<<"1: Kg"<<endl;
 cout<<"2: Ibs"<<endl;
 cout<<"3: Stone"<<endl;
 cout<<"Exit"<<endl;
 int x1;
 cin>>x1;
system("cls");
if(x1==0)
{
  show();
}
 cout<<"Selectati tipul de date iesire :"<<endl;
 if(x1==1)
 {
   cout<<"2: Ibs"<<endl;
   cout<<"3: Stone"<<endl;
 }
 else if(x1==2)
 {
    cout<<"1: Kg"<<endl;
    cout<<"3: Stone"<<endl;
 }
 else if(x1==3)
 {
   cout<<"1: Kg"<<endl;
   cout<<"2: Ibs"<<endl;
 }
 cout<<"Revers action '0' "<<endl;
 int iesire1;
 cin>>iesire1;
 system("cls");

 if(iesire1==0)
  kgM();



/// Kg -> Ibs
  else if(x1==1 && iesire1==2)
  {
    cout<<"kg -> Ibs"<<endl;
    float kg1;float ibs1;
    cout<<"Kg = "; cin>>kg1;
     ibs1= kg1 / 0.45359237;
     system("cls");
     cout<<kg1<<" kg <=> "<<ibs1<<" Ibs"<<endl;
     cout<<"Revers action '0' "<<endl;

     int x212; cin>>x212;
     system("cls");
     if(x212==0)
     kgM();
  }



/// Ibs -> Kg
  else if(x1==2 && iesire1==1)
  {
    cout<<"Ibs -> Kg"<<endl;
    float kg2;float ibs2;
     cout<<"Ibs = ";cin>>ibs2;
     kg2= ibs2 * 0.45359237;
     system("cls");
     cout<<ibs2<<" Ibs<=> "<<kg2<<" Kg"<<endl;
     cout<<"Revers action '0' "<<endl;

     int x212; cin>>x212;
     system("cls");
     if(x212==0)
     kgM();
  }



  //kg -> stone
  else if(x1==1 && iesire1==3)
  {
    cout<<"kg -> Stone"<<endl;
    float kg3;float stone1;
    cout<<"Kg = "; cin>>kg3;
     stone1= kg3 * 0.15747;
     system("cls");
     cout<<kg3<<" kg <=> "<<stone1<<" Stone"<<endl;
     cout<<"Revers action '0' "<<endl;

     int x212; cin>>x212;
     system("cls");
     if(x212==0)
     kgM();
  }


  //stone -> kg
  else if(x1==3 && iesire1 == 1)
  {
    cout<<"Stone -> Kg"<<endl;
    float kg4;float stone2;
    cout<<"Stone = "; cin>>stone2;
     kg4= stone2 / 0.15747 ;
     system("cls");
     cout<<stone2<<" Stone <=> "<<kg4<<" Kg"<<endl;
     cout<<"Revers action '0' "<<endl;

     int x212; cin>>x212;
     system("cls");
     if(x212==0)
     kgM();
  }


  /// ibs -> stone
 else if(x1==2 && iesire1 == 3)
 {
   cout<<"Ibs-> Stone"<<endl;
   float ibs3;float stone3;
   cout<<"Ibs = "; cin>>ibs3;
    stone3= ibs3 * 0.071429 ;
    system("cls");
    cout<<ibs3<<" Ibs <=> "<<stone3<<" Stone"<<endl;
    cout<<"Revers action '0' "<<endl;

    int x212; cin>>x212;
    system("cls");
    if(x212==0)
    kgM();
 }




 /// stone -> ibs
  else if(x1==3 && iesire1 == 2)
{
  cout<<"Stone -> Ibs"<<endl;
  float ibs4;float stone4;
  cout<<"Stone = "; cin>>stone4;
  ibs4 = stone4 * 14 ;
   system("cls");
   cout<<stone4<<" Stone <=> "<<ibs4<<" Ibs"<<endl;
   cout<<"Revers action '0' "<<endl;

   int x212; cin>>x212;
   system("cls");
   if(x212==0)
   kgM();
}

}



 void temp()
 {
  cout<<"Selectatid date de intrare : "<<endl;
  cout<<"1: Celsius"<<endl;
  cout<<"2: Fahrenhei"<<endl;
  cout<<"3: Kelvin"<<endl;
  cout<<"Exit"<<endl;
  int x80;
  cin>>x80;
  system("cls");
  if(x80==0)
  {
    show();
  }
  cout<<"Selectati date de iesire : "<<endl;
   if(x80==1)
   {
       cout<<"2: Fahrenhei"<<endl;
       cout<<"3: Kelvin"<<endl;
   }
   else if(x80==2)
   {
       cout<<"1: Celsius"<<endl;
        cout<<"3: Kelvin"<<endl;
   }
   else if(x80==3)
   {
       cout<<"1: Celsius"<<endl;
       cout<<"2: Fahrenhei"<<endl;
   }
   int iesire2;
   cin>>iesire2;
   system("cls");
   /// Celsius -> Fahrenhei
    if(x80==1 && iesire2==2)
    {
      cout<<"Celsius -> Fahrenhei"<<endl;
      float cels1;float Fahrenhei1;
      cout<<"Celsius = "; cin>>cels1;
       Fahrenhei1 = cels1 * 1.8 + 32;
       system("cls");
       cout<<cels1<<" Celsius <=> "<<Fahrenhei1<<" Fahrenhei"<<endl;
       cout<<"Revers action '0' "<<endl;

       int x212; cin>>x212;
       system("cls");
       if(x212==0)
       temp();
    }



 /// Fahrenhei -> Celsius

    else if(x80==2 && iesire2==1)
    {
     cout<<"Fahrenhei -> Celsius"<<endl;
     float cels2;float Fahrenhei2;
     cout<<"Fahrenhei = "; cin>>Fahrenhei2;
      cels2 = Fahrenhei2 - 32 / 1.8000;
      system("cls");
      cout<<Fahrenhei2<<" Fahrenhei <=> "<<cels2<<" Celsius"<<endl;
      cout<<"Revers action '0' "<<endl;

      int x212; cin>>x212;
      system("cls");
      if(x212==0)
      temp();

    }



// Celsius -> Kelvin

    else if(x80==1 && iesire2==3)
    {
      cout<<"Celsius -> Kelvin"<<endl;
      float cels3;float kelv1;
      cout<<"Celsius = "; cin>>cels3;
       kelv1= cels3 + 273.15;
       system("cls");
       cout<<cels3<<" Celsius <=> "<<kelv1<<" Kelvin"<<endl;
       cout<<"Revers action '0' "<<endl;

       int x212; cin>>x212;
       system("cls");
       if(x212==0)
       temp();
    }


/// Kelvin -> Celsius

    else if(x80==3 && iesire2==1)
    {
      cout<<"Kelvin -> Celsius"<<endl;
      float cels4; float kelv2;
      cout<<"Kelvin = "; cin>>kelv2;
       cels4= kelv2 - 273.15;
       system("cls");
       cout<<kelv2<<" Kelvin <=> "<<cels4<<" Celsius"<<endl;
       cout<<"Revers action '0' "<<endl;

       int x212; cin>>x212;
       system("cls");
       if(x212==0)
       temp();
    }

    /// Fahrenhei -> Kelvin

    else if(x80==2 && iesire2==3)
    {
      cout<<"Fahrenhei -> Kelvin"<<endl;
      float kelv3;float Fahrenhei3;
      cout<<"Fahrenhei = "; cin>>Fahrenhei3;
      kelv3 = (Fahrenhei3 + 459.67 )* 5/9;
       system("cls");
       cout<<Fahrenhei3<<" Fahrenhei <=> "<<kelv3<<" Kelvin"<<endl;
       cout<<"Revers action '0' "<<endl;

       int x212; cin>>x212;
       system("cls");
       if(x212==0)
       temp();
    }


    // Kelvin -> Fahrenhei
     else if(x80==3 && iesire2==2)
     {
       cout<<"Kelvin -> Fahrenhei"<<endl;
       float Fahrenhei4; float kelv4;
       cout<<"Kelvin = "; cin>>kelv4;
        Fahrenhei4 = kelv4 * 9/5 - 459.67;
        system("cls");
        cout<<kelv4<<" Kelvin <=> "<<Fahrenhei4<<" Fahrenhei"<<endl;
        cout<<"Revers action '0' "<<endl;

        int x212; cin>>x212;
        system("cls");
        if(x212==0)
        temp();
     }

 }



 void lung()
 {
  cout<<"forever"<<endl;
  cout<<"Selectati date de intrare :"<<endl;
  cout<<"1 : cm"<<endl;
  cout<<"2 : inch"<<endl;
  cout<<"Exit"<<endl;

  int x88;
  cin>>x88;
  system("cls");
  if(x88==0)
  {
    show();
  }

  if(x88==1)
  {
    cout<<"cm -> inch"<<endl;
    float cm1; float inch1;
    cout<<"cm = "; cin>>cm1;
     inch1 = cm1 *  0.39370;
     system("cls");
     cout<<cm1<<" cm <=> "<<inch1<<" inch"<<endl;
     cout<<"Revers action '0' "<<endl;

     int x212; cin>>x212;
     system("cls");
     if(x212==0)
     lung();
  }
  else if(x88==2)
  {
    cout<<"inch -> cm"<<endl;
    float cm2, inch2;
    cout<<"inch = ";cin>>inch2;
    cm2= inch2 / 0.39370;
    system("cls");
    cout<<inch2<<" inch <=> "<<cm2<<" cm"<<endl;
     cout<<"Revers action '0' "<<endl;

     int x212; cin>>x212;
     system("cls");
     if(x212==0)
     lung();
  }

 }


int main() {
 show();

  return 0;
}
