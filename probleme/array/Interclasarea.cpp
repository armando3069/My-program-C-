 #include<iostream>
 using namespace std;

 int array_one[]={1,3,4,7,9}; int n=5;
 int array_two[]={2,5,6,8,10}; int m=5;
 int array_three[11];
 int i=0; int j=0; int k=0;

 int main()
 {

   while (i<n && j<m)
   {
       if(array_one[i] < array_two[j])
       {
         array_three[k++] = array_one[i++];
       }
        else
         {
            array_three[k++] = array_two[j++];
         }

   }
   if(i<=n)
   {
     for(int p=0; p<n; p++)
     {
       array_three[k++] = array_one[p];
     }
   }

   if(j<=m)
     {

     for(int p=0;p<m;p++)
      {
       array_three[k++] = array_two[p];
      }

     }


     for(int p=0;p<k;p++)
     {
       cout<<array_three[p];
     }




   return 0;
 }
