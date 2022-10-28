#include <stdio.h>
#include <stdlib.h>
#include"mariem stack.h"
void print (int x);
int main()
{ stack_t s;


    Stack_Init(&s);
    Stack_Push(&s,1);

    Stack_Push(&s,2);

    Stack_Push(&s,3);

    Stack_Push(&s,4);

    Stack_Push(&s,5);

    printf ("elements in stack are :");

    Stack_Pop(&s);
    Stack_Pop(&s);
    Stack_Top(&s,5);

    stack_traverse(&s,print);

    return 0;
}
void print (int x)
{
    printf("%d",x);
}
