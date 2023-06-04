#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(){
    struct Node *first,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    int n;
    scanf("%d",&n);
    first->data=n;
    first->next=NULL;


}