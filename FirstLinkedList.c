/*Performing various operations on linked list*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lklist
{
    int info;
    struct lklist *next;
} node;

void main()
{
    node *head = NULL, *temp, *ptr, *ptr1;
    int choice, item, count, position;
    while (1)
    {
        printf("Enter your choice\n\
   1.For inserting ele at beginning\n\
   2.For traversing and counting nodes\n\
   3.For searching\n\
   4.For Insert At Last\n\
   5.To delete at beginning\n\
   6.To delete complete link list\n\
   7.deletion at specific  position\n\
   8.Insertion at specific position\n\
   9.Deletion at end\n\
   10.Insert after a given position\n\
   11.Delete after a given position\n\
   12.Insert before a given position\n\
   14.Delete before a given position\n\
   13.For exit\n");

        scanf("%d", &choice);
        temp = (node *)malloc(sizeof(node)); // this create a new node every tym & give address of its first part to temp

        switch (choice)
        {
        case 1:
            printf("Enter the data to be entered\n");
            scanf("%d", &temp->info); // entering data to first part
            temp->next = head;        // second part of link contains NULL that is value of head firstly
            // now head is empty
            head = temp; // here head contains the address of first part of node
            printf("Node created successfully\n");
            break;

        case 2:
            printf("The data entered in the linked list are:\n");
            if (head == NULL)
            {
                printf("Link is empty\n");
            }
            else
            {
                count = 0;
                temp = head;
                while (temp != NULL)
                {
                    count++;
                    printf("%d\n", temp->info);
                    temp = temp->next;
                } // end of while
                printf("Number of nodes created=%d\n", count);
            }
            break;

        case 3:
            printf("Enter the element to be searched\n");
            temp = head;
            scanf("%d", &item);
            while (temp != NULL)
            {
                if (item == temp->info)
                {
                    printf("Found\n");
                    break;
                }

                else
                {
                    temp = temp->next;
                }
                if (temp == NULL)
                {
                    printf("Not found\n");
                }
            }
            break;

        case 4:
            printf("Enter the element to be inserted at last\n");
            scanf("%d", &temp->info);
            temp->next = NULL;
            ptr = head; // address of first node
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
            printf("element successfully inserted at last\n");
            break;

        case 5:
            temp = head;
            head = head->next; // pointing to second node
            free(temp);
            printf("first data deleted successfully\n");
            break;

        case 6:
            while (head != NULL)
            {
                temp = head;       // first node address pass
                head = head->next; // reaching every node
                free(temp);
            }
            temp = NULL;
            printf("Full node deleted successfully\n");
            break;

        case 7:
            printf("Enter the position of node that u want to delete\n");
            scanf("%d", &position);
            ptr = head;
            ptr1 = head;
            if (head == NULL)
            {
                printf("List is empty\n");
            }

            else if (position == 1)
            {
                head = ptr->next; // bcz the second node is being pointed out
                free(ptr);
            }

            else
            {
                while (position != 1)
                {
                    ptr1 = ptr;
                    ptr = ptr->next;
                    position--;
                }
                ptr1->next = ptr->next;
                free(ptr);
            }

            break;

        case 8:
            printf("Enter the data & the position at which u want to insert a new ele\n");
            scanf("%d %d", &temp->info, &position);
            ptr = head;
            position--;
            while (position != 1)
            {
                ptr = ptr->next;
                position--;
            }
            temp->next = ptr->next;
            ptr->next = temp;

            break;

        case 9:
            ptr = head;
            while (ptr->next->next != NULL)
            {
                ptr = ptr->next;
            }
            free(ptr->next);
            ptr->next = NULL;
            break;

        case 10:
            printf("Enter the data & the position at which u want to insert a new ele\n");
            scanf("%d %d", &temp->info, &position);
            ptr = head;
            while (position != 1)
            {
                ptr = ptr->next;
                position--;
            }
            temp->next = ptr->next;
            ptr->next = temp;
            break;

        case 11:
            printf("Enter the position of node that u want to delete\n");
            scanf("%d", &position);
            ptr = head;
            ptr1 = head;
            position += 1;
            while (position != 1)
            {
                ptr1 = ptr;
                ptr = ptr->next;
                position--;
            }
            ptr1->next = ptr->next;
            free(ptr);
            break;

        case 12:
            printf("Enter the data & the position at which u want to insert a new ele\n");
            scanf("%d %d", &temp->info, &position);
            ptr = head;
            position-=2;
            while (position != 1)
            {
                ptr = ptr->next;
                position--;
            }
            temp->next = ptr->next;
            ptr->next = temp;
            break;

            case 14:
             printf("Enter the position of node that u want to delete\n");
            scanf("%d", &position);
            ptr = head;
            ptr1 = head;
            position-=1;
            if (position == 1)
            {
                head = ptr->next; // bcz the second node is being pointed out
                free(ptr);
            }
            while (position != 1)
            {
                ptr1 = ptr;
                ptr = ptr->next;
                position--;
            }
            ptr1->next = ptr->next;
            free(ptr);
            break;

        case 15:
        
        break;

        case 16:
            exit(1);
            break;

        default:
            printf("Invalid Choice\n");
        } // end of switch
    }     // end of while(1)
}