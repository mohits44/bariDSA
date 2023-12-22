#include <iostream>
using namespace std;
struct stack                // custom data type stack, normal stack variable can be accessed using . operator for accessing inner variables
{                           //                   stack pointer variable can access using caps -> operator for accessing inner variables
    int size;
    int top;
    int *s;
};
void push(stack *st, int x)
{
    if(st->top==st->size-1)        // top==size-1 means full
    cout<<"stack overflow";
    else
    {
        st->s[++(st->top)]=x;        //increase top and insert x
    }
}
int pop(stack *st)
{
    int x=-1;
    
    if(st->top==-1)                //top==-1 means empty
    cout<<"stack underflow";
    else
    {
    x=st->s[st->top];            //store x and decrease top for pop
    st->top--;
    }
    return x;
}
int peek(stack st, int pos)        // call by value , same like a variable
{
    int x=-1;                       
    if(st.top-pos+1<0)            // convert pos to index
    {
        
        cout<<"invalid position";
    }
    else
    {
        x=st.s[st.top-pos+1];        // access that index and store in x
    }
     return x;                       // and return x
    
}
int main() {
    // Write C++ code here
    struct stack st;                // custom variable stack make a diagram of it
    cout<<"enter size of stack:";
    cin>>st.size;                    // read stack size
    st.s=new int[st.size];            // use that size to create array
    st.top=-1;
    
    //push
    push(&st,1);                    // push using reference because otherwise wo fn ki copy wala stack banega aur yaha wala stack empty rahega
    push(&st,2);
    cout<<"value popped"<<pop(&st)<<endl;            // pop returns deleted value also
    cout<<"stack top value is"<<st.s[st.top]<<endl;        // top helps to get index of top



    
    
    return 0;
}
