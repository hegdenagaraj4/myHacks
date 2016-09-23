#include <stdio.h>
#include <stdlib.h>

typedef struct __node__ 
{
    int data;
    struct __node__ *next;
} Node;

void insertNode(Node **node,int data)
{
    Node *temp;
    Node * new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    if(*node == NULL) {
        *node = new_node;
    }
    else {
        temp = *node;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = new_node;
    }
}     

void printList(Node *node)
{
    while( node!=NULL ){
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

Node * delete_list(int listSize, Node **node, int num)
{ 
    Node *head = *node, *temp = *node, *cur = NULL, *prev = NULL;
    while(temp!=NULL){
        //check if the first element is the node to be deleted
        if(temp == head && temp->data > num){
            cur = temp;
            temp = temp->next;
            head = temp;
            free(cur);
            printList(*node);
        } 
        //to all other nodes
        else if( temp->next!=NULL && temp->next->data > num) {
            prev = temp;
            prev->next = temp->next->next;
            cur = temp->next;
            temp = prev;
            free(cur);
        }
        else 
            temp = temp->next;
    }
    return *node; 
}

int main(int args, char *argv[])
{
    //scan for the size of a linked list
    int listSize=0, num=0,i=0,data=0;
    scanf("%d", &listSize);
    
    Node *node = NULL, *temp=NULL;
    //node = malloc(sizeof(Node)*listSize);
    for(i=0; i<listSize; i++){
        scanf("%d", &data);
        insertNode(&node,data);
    }
    //scan for the number to be 
    scanf("%d", &num);

    temp = delete_list(listSize, &node, num);
    printList(temp);
    return 0;
}
