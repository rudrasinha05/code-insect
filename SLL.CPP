struct node
{
int data;
struct node *next;
};
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void print_all_ele(struct node *);
struct node *last_node_addr(struct node *);
struct node *find_x(struct node *);
struct node *find_x1(struct node *);
struct node *second_last_node_addr(struct node *);
struct node *third_last_node_addr(struct node *);
void address_of_nodes(struct node *);
struct node *third_last_node_addr1(struct node *);
struct node *second_last_node_addr1(struct node *);
void insert_x(struct node *);
void delete_x(struct node *);
void move_last_to_front(struct node *);
void middle_node_addr(struct node *);
void middle_node_addr1(struct node *);
struct node *main()
{
clrscr();
struct node *last;
struct node *find;
struct node *secondLAST;
struct node *secondLAST1;
struct node *thirdLAST;
struct node *thirdLAST1;
struct node a={10,NULL};
struct node b={20,NULL};
struct node c={30,NULL};
struct node d={40,NULL};
struct node e={50,NULL};
struct node f={60,NULL};
struct node *s=&a;
a.next=&b;
b.next=&c;
c.next=&d;
d.next=&e;
e.next=&f;

//printf("Address of first node is %u.\n\n",s);

print_all_ele(s);

address_of_nodes(s);
/*
last=last_node_addr(s);
printf("Address of last node is %u.\n\n",last);

find_x(s);

find=find_x1(s);
printf("%u.\n\n",find);

secondLAST=second_last_node_addr(s);
printf("Address of second last node address is %u.",secondLAST);

secondLAST1=second_last_node_addr1(s);
printf("\n           OR\nAddress of second last node is %u.\n\n",secondLAST1);

thirdLAST=third_last_node_addr(s);
printf("Address of third last node is %u.",thirdLAST);
d
thirdLAST1=third_last_node_addr1(s);
printf("\n          OR\nAddress of third last node is %u.\n\n",thirdLAST1);

insert_x(s);
	     */
//delete_x(s);

//move_last_to_front(s);

/*middle_node_addr(s);
printf("          OR\n");
middle_node_addr1(s);    */
getch();
return s;
}

//printing all elements in the linked list
void print_all_ele(struct node *s)
{
printf("Elements in linked list is: ");
while((*s).next!=NULL)
 {
  printf(" %d   ",(*s).data);
  s=(*s).next;
  }
 printf("%d",(*s).data);
  printf(".\n\n");
}

//finding address of last node in single linked list
struct node *last_node_addr(struct node *s)
{
if(s==NULL)
 {
  printf("No linked list exist.");
  return NULL;
 }
 while((*s).next!=NULL)
 s=(*s).next;
 return s;
}

//finding address of a node which contain data x in single linked list
struct node *find_x(struct node *s)
{
 int x;
 printf("Enter an number to find its address: ");
 scanf("%d",&x);
  if(s==NULL)
   {
    printf("NO linked list exist.");
    return NULL;
   }
  else if((*s).data==x)
   {
    printf("Address of %d is %u.",x,s);
    return s;
   }
  else
   {
     while((*s).data!=x && (*s).next!=NULL)
      {
       s=(*s).next;
      }
     if((*s).data==x)
      {
       printf("Address of %d is %u\n",x,s);
       return s;
      }
     else
     {
      printf("no %d in linked list",x);
      return s;
      }
   }
}
	  //OR
struct node *find_x1(struct node *s)
{
int x;
printf("          OR\n");
printf("Enter an number to find its address: ");
scanf("%d",&x);
if(s==NULL)
return NULL;
else
{
 while(s->data!=x && s->next!=NULL)
 s=s->next;
 printf("Address of %d is ",x);
 if(s->data==x)
 return s;
 else
 return NULL;
}
}


//finding addresss of second last node in single linked list
struct node *second_last_node_addr(struct node *s)
{
struct node *p;
if(s==NULL)
return NULL;
else
while(s->next!=NULL)
{
p=s;
s=s->next;
}
return p;
}
	    //OR//
struct node *second_last_node_addr1(struct node *s)
{
if(s==NULL)
return NULL;
else
{
while((*(*s).next).next!=NULL)
s=(*s).next;
return s;
}
}

//find address of third last node in single linked list
struct node *third_last_node_addr(struct node *s)
{
struct node *p;
struct node *q;
if(s==NULL)
  return NULL;
else if((*s).next==NULL)
  return NULL;
else
{
 while((*s).next!=NULL)
  {
   q=p;
   p=s;
   s=(*s).next;
     }
return q;
}
}
	       //OR//
struct node *third_last_node_addr1(struct node *s)
{
if(s==NULL)
return NULL;
else
{
while((*(*(*s).next).next).next!=NULL)
s=(*s).next;
return s;
}
}


//printing address of all nodes in single linked list
void address_of_nodes(struct node *s)
{
if(s==NULL)
printf("No linked list exist.");
else
{
printf("Address of all  nodes are: ");
while((*s).next!=NULL)
{
printf("%u ",s);
s=(*s).next;
}
printf("%u",s);
printf(".\n\n");
}
}



//insert a node with data-x before node with data-y
void insert_x(struct node *s)
{
 int y;
 struct node x;
 struct node *p;
 struct node *q;
 if(s==NULL)
 printf("no linked list exist");

 q=s;
 printf("Enter a number before you want to insert new data :");
 scanf("%d",&y);
 if((*q).data==y)
  {
    x.next=q;
    q=&x;
	  printf("Enter new Number to insert : ");
      scanf("%d",&(x.data));
      print_all_ele(q);
  }
 else
 {
    while((*s).data!=y && (*s).next!=NULL)
     {
       p=s;
       s=(*s).next;
     }

    if((*s).data==y)
     {
       (*p).next=&x;
       x.next=s;
       printf("Enter new Number to insert : ");
       scanf("%d",&(x.data));
       print_all_ele(q);
     }
    else
     {
       printf("No %d in linked list\n",y);
     }
 }
}


//delete a node which contain data-x in SLL
void delete_x(struct node *s)
{
 int x;
 struct node *p;
 struct node *q;
 if(s==NULL)
  {
   printf("no linked list exist");
  }
  q=s;
 printf("enter a number which you want to delete : ");
 scanf("%d",&x);
 if((*s).data==x)
 {
 p=s;
 s=(*s).next;
 free(s);
 p=NULL;
  print_all_ele(s);

 }
  while((*s).data!=x && (*s).next!=NULL)
  {
    p=s;
    s=(*s).next;
  }
 if((*s).data==x)
 {
   (*p).next=(*s).next;
   free(s);
   s=NULL;
  print_all_ele(q);
 }
 else
 {
 printf("No x, So no deletion\n");
 }
 middle_node_addr(q);
}

//to move last node of single linked list to front
void move_last_to_front(struct node *s)
{
struct node *p;
struct node *q;
q=s;
if(s==NULL)
{
printf("No linked list exist\n");
}
if(s->next==NULL)
{
printf("only one node in the linked list\n");
}
while((*s).next!=NULL)
{
 p=s;
 s=(*s).next;
}
(*p).next=NULL;
(*s).next=q;
 print_all_ele(s);
 address_of_nodes(s);
}

//find the middle node address of given single linked list
void middle_node_addr(struct node *s)
{
int count=0;
struct node *p;
p=s;
if(s==NULL)
{
printf("No linked list exist\n");
}
if(s->next==NULL || s->next->next==NULL)
{
printf("there is onle one or two nodes in Linked List , so no middle\n");
}
while((*s).next!=NULL)
{
count++;
s=(*s).next;
}
float val=(float)count/2;
count=ceil(val);
printf("count=%d",count);
while(count!=1)
{
 p=(*p).next;
 count--;
}
if(count%2!=0)
 {
  p=p->next;
  printf("middle node address is %u.\n",p);
  printf("middle node is %d\n.",p->data);
 }
else
 {
  printf("middle node address is %u and %u.\n",p,p->next);
  printf("middle node is %d OR %d.\n",p->data,p->next->data);
 }
}

//            OR
void middle_node_addr1(struct node *s)
{
struct node *p;
p=s;
while((*s).next!=NULL)
{
p=(*p).next;
s=(*(*s).next).next;
}
printf("middle node is %u.\n",p);
}