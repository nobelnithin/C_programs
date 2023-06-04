#ifnde _Stack_h

struct Node ;
typedef struct Node *PtrToNode;
typedef PtrNode Stack;
int IsEmpty (Stack S);
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push (ElemenType X, Stack S);
ElementType Top( Stack S);
void Pop(Stack S);

#endif 
struct Node()
   ElementType Element ;
   ptrToNode Next;
);