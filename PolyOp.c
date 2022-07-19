#include <stdio.h>
#include <malloc.h>

typedef struct polynomial
{
    int coeff;
    int power;
    struct polynomial *next;
} poly;

poly *head = NULL, *temp;
int terms1;

void Insert(poly **head, poly **temp)
{

    for (int i = 1; i <= terms1; i++)
    {
        *temp = (poly *)malloc(sizeof(poly));
        printf("Enter the coeff and power of %d term\n", i);
        scanf("%d %d", &(*temp)->coeff, &(*temp)->power);
    }
}

void sort(poly **head, int terms1, poly **temp)
{
    int swap;
    for (int i = 1; i <= terms1; i++)
    {
        *temp = *head;
        while (*temp != NULL)
            if ((*head)->power > (*head)->next->power)
            {
                swap = (*head)->power;
                (*head)->power = (*head)->next->power;
                (*head)->next->power = swap;
            }
    }
}
void display(poly *head, int terms1)
{
    for (int i = 1; i <= terms1; i++)
    {
        while (head!= NULL)
        {
            printf("%d X %d+", head->coeff, head->power);
            head = head->next;
        }
    }
}
void main()
{
    int choice;
    printf("Enter the number of terms in First Polynomial\n");
    scanf("%d", &terms1);
    while (1)
    {
        printf("Enter your choice\n\
   1.Showing first polynomial\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Insert(&head, &temp);
            sort(&head, terms1, &temp);
            display(head, terms1);
            break;
        }
    }
}