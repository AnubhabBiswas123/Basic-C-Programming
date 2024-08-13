#include <stdio.h>
#include <stdlib.h>

struct node {
    int power;
    int coeff;
    struct node* next;
};

void traverse(struct node* ptr);
struct node* insert();
struct node* multiply(struct node* head1, struct node* head2);

int main() {
    struct node* head1 = NULL;
    struct node* head2 = NULL;
    struct node* head3 = NULL;

    printf("\nPolynomial 1:");
    head1 = insert();
    printf("\nPolynomial 2:");
    head2 = insert();
    head3 = multiply(head1, head2);

    printf("\nThe Addition of two polynomials is:");
    traverse(head3);

    // Free memory
    while (head1 != NULL) {
        struct node* temp = head1;
        head1 = head1->next;
        free(temp);
    }

    while (head2 != NULL) {
        struct node* temp = head2;
        head2 = head2->next;
        free(temp);
    }

    while (head3 != NULL) {
        struct node* temp = head3;
        head3 = head3->next;
        free(temp);
    }

    return 0;
}

struct node* insert() {
    int data, n, i;
    struct node* head = NULL;
    struct node* temp = NULL;

    printf("\nEnter the maximum power of x:");
    scanf("%d", &n);

    for (i = n; i >= 0; i--) {
        printf("Enter the coefficient of degree %d:\n", i);
        scanf("%d", &data);

        if (data != 0) {
            struct node* newnode = (struct node*)malloc(sizeof(struct node));
            newnode->power = i;
            newnode->coeff = data;
            newnode->next = NULL;

            if (temp == NULL) {
                head = newnode;
                temp = newnode;
            } else {
                temp->next = newnode;
                temp = newnode;
            }
        }
    }

    return head;
}



void traverse(struct node* ptr) {
    printf("\n");
    while (ptr != NULL) {
        if (ptr->next != NULL)
            printf("%dX^%d+", ptr->coeff, ptr->power);
        else
            printf("%dX^%d", ptr->coeff, ptr->power);

        ptr = ptr->next;
    }
}
