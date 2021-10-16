#include<bits/stdc++.h>
using namespace std;

int total_node = 14;

char TREE[] = {'\0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', '\0', '\0', 'J', '\0', 'K', 'L'};

int right_child(int index)
{
    if(TREE[index]!='\0' && ((2*index)+1)<=total_node)
        return (2*index)+1;
    return -1;
}

int left_child(int index)
{
  if(TREE[index]!='\0' && (2*index)<=total_node)
        return (2*index);
    return -1;
}

void preorder(int index)
{
    if(index>0 && TREE[index]!='\0')
    {
        cout<<TREE[index];
        preorder(left_child(index));
        preorder(right_child(index));

    }
}

void inorder(int index)
{
    if(index>0 && TREE[index]!='\0')
    {
        inorder(left_child(index));
        cout<<TREE[index];
        inorder(right_child(index));

    }
}

void postorder(int index)
{
    if(index>0 && TREE[index]!='\0')
    {
        postorder(left_child(index));
        postorder(right_child(index));
        cout<<TREE[index];
    }
}

int main()
{
    cout<<"Preorder:\n";
    preorder (1);
    cout<<"\nInorder:\n";
    inorder (1);
    cout<<"\nPostorder:\n";
    postorder (1);

    return 0;

}


