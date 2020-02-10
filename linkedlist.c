#include<stdio.h>

int main()
{
    while (menu()!=5);

    return 0;
}
int menu ()
{
    int op;
    printf("select link list operation\n");
    printf("1.insert\n");
    printf("2.delete\n");
    printf("3.update\n");
    printf("4.search\n");
    printf("5.close\n");
    printf("input operation: ");
    scanf("%d", &op);

    if (op=1)
    {
        insert();
    }
    else if(op=2)
    {

        printf("\n");
    }

    else if(op=3)
    {
        printf("===update operation===\n");
    }


    else if(op=4)
    {
        printf("===search operation===\n");
    }

    else if(op=5)

    {
        printf("===operation closed===\n");
        return 5;

    }
    else
    {
        printf("invalid operation try again\n");
    }
}
int insert ()
{
    int op;
    printf("select link list operation\n");
    printf("1.push front\n");
    printf("2.push back\n");
    printf("3.push after\n");
    printf("4.push hat\n");
    printf("5.close\n");
    printf("input operation: ");
    scanf("%d", &op);

    if (op=1)
    {
        printf("push front operation\n");

    }
    else if(op=2)
    {

        printf("push back operation\n");
    }

    else if(op=3)
    {
        printf("push after operation\n");
    }


    else if(op=4)
    {
        printf("push hat operation\n");
    }

    else if(op=5)

    {
        printf("===operation closed===\n");
        return op;

    }
    else
    {
        printf("invalid operation try again\n");
    }
}



