//---------------------------------------------------------------------------

#ifndef DinLstH
#define DinLstH
//---------------------------------------------------------------------------
#endif
#include <stdio.h>
#include <conio.h>
#include <tchar.h>

#define Max_ch 100

 struct Itm {
	int id;
	char Info[Max_ch];
	Itm * next, *prev;
	} ;

 struct List {
	char Name[20];
	int getId;
	Itm * bg, *cur,*end;
	} ;

  List* CreateList(char* Name,char* Inf);
  Itm* AddHead(List* lst,char* Inf);
  Itm * CrItm(int Id);
  void ViewLst(List* lst);
  void DelHead(List* lst);
  void DelLst(List* lst);
  void ViewLstBk(List* lst);