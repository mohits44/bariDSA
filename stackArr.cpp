#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};
void push(stack *st, int x)
{
    if(st->top==st->size-1)
    cout<<"stack overflow";
    else
    {
        st->s[++(st->top)]=x;
    }
}
int pop(stack *st)
{
    int x=-1;
    
    if(st->top==-1)
    cout<<"stack underflow";
    else
    {
    x=st->s[st->top];
    st->top--;
    }
    return x;
}
int peek(stack st, int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
    {
        
        cout<<"invalid position";
    }
    else
    {
        x=st.s[st.top-pos+1];
    }
     return x;   
    
}
int main() {
    // Write C++ code here
    struct stack st;
    cout<<"enter size of stack:";
    cin>>st.size;
    st.s=new int[st.size];
    st.top=-1;
    
    //push
    push(&st,1);
    push(&st,2);
    cout<<"value popped"<<pop(&st)<<endl;
    cout<<"stack top value is"<<st.s[st.top]<<endl;



    
    
    return 0;
}
