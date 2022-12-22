//---------------------------------------------------------------------------

#pragma hdrstop

#include "DinLst.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)



  Itm * CrItm(int Id,char* Inf)
  {
	Itm *t = new Itm;
	t->next = t->prev = NULL;
	t->id = Id;
	strcpy(t->Info,Inf);
	return t;
  }


 List* CreateList(char* Name, char *Inf) {
	List *lst = new List;
	strcpy(lst->Name,Name);
	lst->getId = 0;
	lst->bg = CrItm(lst->getId,Inf);
	lst->end = lst->bg;
	return lst;
	}

  Itm* AddHead(List* lst, char *Inf) {

	lst->cur = CrItm(++lst->getId,Inf);
	lst->bg->prev = lst->cur;
	lst->cur->next = lst->bg;
	lst->bg = lst->cur;
	return lst->bg;
	}

void ViewLst(List* lst){
printf(" %s \n", lst->Name);
lst->cur = lst->bg;
while( lst->cur) {
printf("%i:  %s \n", lst->cur->id, lst->cur->Info);
lst->cur = lst->cur->next;
}
}

void DelHead(List* lst) {

if(lst->bg == lst->end)
DelLst(lst);
else
{
lst->cur = lst->bg;
lst->bg = lst->bg->next;
lst->bg->prev = NULL;
delete lst->cur;
}
}

void DelLst(List* lst) {
while( lst->bg!=lst->end) DelHead(lst);
 delete lst->bg;
 delete lst;
}


void ViewLstBk(List* lst){
printf(" %s \n", lst->Name);
lst->cur = lst->end;
while( lst->cur) {
printf("%i:  %s \n", lst->cur->id, lst->cur->Info);
			lst->cur = lst->cur->prev;
		}
}