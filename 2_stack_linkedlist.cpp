#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void push(int x)
{
    Node *t = new Node;
    if(t==NULL)
    {
        cout<<"stack overflow";
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{
    struct node *t;
    int x=-1;
    if(top==NULL)
    
}
int main() {
    // Write C++ code here
    

    return 0;
}
