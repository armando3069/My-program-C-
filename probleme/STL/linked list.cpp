#include<iostream>
using namespace std;

struct list
{
  int info;
  list* next;
};
 list* head = NULL;



  void add_front (list* &head ,int val)
  {
    list* p = new list ;
    p->info = val;
    p->next = head;
    head = p;
  }



  void add_back(list* &head,int val)
  {

    list* nod =new list;
    nod->info = val;
    nod-> next = NULL;
   if(head==NULL)
   {
     head = nod ;
   }

   else
    {
        list* nod_curent = head;
        while(nod_curent->next != NULL)
        {
           nod_curent = nod_curent->next ;
        }
           nod_curent->next = nod ;
    }

  }




  void show(list* head)
  {
    while (head != NULL)
     {
       cout<<head->info<<"->";
       head = head->next;
     }
  }




 int main(){

  add_front(head,2);
  add_front(head,3);
  add_front(head,4);
  add_back(head,8);
  add_back(head,4);
  add_back(head,7);
  show(head);

  return 0;
  }
