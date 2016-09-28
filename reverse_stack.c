#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct __stack__
{
    int data;
    struct __stack__ * next;
}Stack;



void push(Stack **top_ref,int data);
int pop(Stack **top_ref);
bool isEmpty(Stack **top)
{
    return (top == NULL)?1:0;
}

void insertAtBottom(Stack **top, int x)
{
    if(isEmpty(top)){
        push(top,x);
    } else {
        int item = pop(top);
        insertAtBottom(top, x);
        push(top,item);
    }
}

void reverse(Stack **top) 
{
    if(!isEmpty(top))
    {
        int temp = pop(top);
        reverse(top);
        insertAtBottom(top,temp);
    }
}

void push(Stack **top_ref,int data)
{
    Stack *new_node = (Stack *)malloc(sizeof(Stack));
    //what if no memory gets allocated to new_node
    if (new_node == NULL)
    {
        printf("Stack full\n");
        exit(0);
    }
    new_node->data = data;
    /*update the top */
    new_node->next = *top_ref;
    *top_ref = new_node;
}

int pop(Stack **top_ref)
{
    char ret;
    Stack *top;
    if(*top_ref== NULL){
        printf("\n overflow");
        exit(0);
    }
    top = *top_ref;
    ret = top->data;
    *top_ref = top->next;
    free(top);
    return ret;
}

void print_st(Stack *st)
{
    while(st!=NULL){
        printf(" %d  ",st->data);
        st = st->next;
    }
}


int main()
{
    Stack *S;
    int i,n=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        push(&S,i);
    }
    print_st(S);
    reverse(&S);
    print_st(S);
}
