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
scanf("%d", &data);
head->data = data;
head->prev = NULL;
head->next = NULL;
last = head;
for(i=2; i<=n; i++)
{
newNode = (struct node *)malloc(sizeof(struct node));
cout<<"\nEnter data of node: ";
scanf("%d", &data);
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
cout<< temp->data;
n++;

temp = temp->next;
}
}
}

void insertAtBeginning(int data)
{
struct node * newNode;
if(head == NULL)
{
cout<<"Error, List is Empty!\n";
}
else
{
newNode = (struct node *)malloc(sizeof(struct node));
newNode->data = data;
newNode->next = head;
newNode->prev = NULL;
head->prev = newNode;
head = newNode;
}
}
int main()
{
int n, data, choice=1;
head = NULL;
last = NULL;
cout<<"Input the number of nodes: ";
cin>>n;
createList(n);
displayList();
cout<<"\n\nEnter data of first node : ";
cin>>data;
insertAtBeginning(data);
displayList();
return 0;
}
