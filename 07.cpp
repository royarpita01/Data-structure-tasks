#include <iostream>
using namespace std;

struct node {
int data;
struct node * prev;
struct node * next;
}*head, *last;

void createList(int n)
{
int i, data;
struct node *newNode;
if(n >= 1)
{
head = (struct node *)malloc(sizeof(struct node));
cout<<"\nEnter data of node 1 : ";
cin>>data;
head->data = data;
head->prev = NULL;
head->next = NULL;
last = head;
for(i=2; i<=n; i++)
{
newNode = (struct node *)malloc(sizeof(struct node));
cout<<"\nEnter data of node: ";
cin>>data;
newNode->data = data;
newNode->prev = last;
newNode->next = NULL;
last->next = newNode;
last = newNode;
}
}
}

void displayList()
{
struct node * temp;
int n = 1;
if(head == NULL)
{
cout<<"\nList is empty.\n";
}
else
{
temp = head;
cout<<"\nTHE DOUBLY LINKED LIST IS :\n\n";
while(temp != NULL)
{
cout<<temp->data;
n++;
temp = temp->next;
}
}
}

void insert_given_pos(int data, int position)
{
int i;
struct node * newNode, *temp;
if(head == NULL)
{
cout<<"Error, List is empty!\n";
}
else
{
temp = head;
i=0;
while(i<position-1 && temp!=NULL)
{
temp = temp->next;
i++;
}
if(temp!=NULL)
{
newNode = (struct node *)malloc(sizeof(struct node));
newNode->data = data;
newNode->next = temp->next;
newNode->prev = temp;
if(temp->next != NULL)
{
temp->next->prev = newNode;
}
temp->next = newNode;
}
else
{
cout<<"Error, Invalid position\n";
}
}

int main()
{
int n, data, pos;
head = NULL;
last = NULL;
cout<<"Input the number of nodes: ";n);
cin>>n;
createList(n);
displayList();
cout<<"\n\nEnter data of Last node : ";
cin>>data;
cout<<"\nEnter the position : ";
scanf("%d",&pos);
insert_given_pos(data, pos);
displayList();
return 0;
}
