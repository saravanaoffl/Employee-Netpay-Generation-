#include<stdio.h>
#include<conio.h>
struct node
{
  int id;
  char name[20];
  int age,salary,we,ba;
  struct node*link;
}
void_insert()
{
  struct node*p;
  int i=1;
while(i)
{
 p=(struct node*)malloc(sizeof(struct node));
 printf("ENTER THE EMPLOYEE ID");
 scanf("%s",&p->id);
 printf("ENTER THE EMPLOYEE NAME");
 scanf("%s",&p->name);
 printf("ENTER THE WORKING EXPERIENCE");
 scanf("%s",we);
 printf("ENTER THE AGE");
 scanf("%s",&p->age);
 printf("ENTER THE BASIC SALARY");
 scanf("%s",&p->ba);
 p->link=first;
 first=p;
 scanf("1 to continue and 0 to exit");
 }
}
void_display
{
 struct node*temp;
{
 if(first==NULL)
 printf("EMPTY");
else
 temp=first;
{
 printf("NAME WORKING EXPERIENCE AGE SALARY");
 while(temp!=NULL)
{
 printf("%d",temp->id);
 printf("%s",temp->name);
 printf("%d",temp->we);
 printf("%d",temp->age);
 printf("%d",temp->salary);
 temp=temp->link;
}
}
void_delete()
{
 struct node*temp;
 if(first==NULL)
 printf("EMPTY");
else
 temp=first;
{
 printf("ENTER ID TO BE DELETED");
 scanf("%d",&ele);
 while(temp->id!=0)
 prev=temp;
 temp=temp->link;
 prev->link=temp->link;
 free(temp);
 printf("DELETION SUCCESSFULL");
}




