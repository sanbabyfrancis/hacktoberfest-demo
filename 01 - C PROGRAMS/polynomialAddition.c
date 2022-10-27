#include <stdio.h>

struct poly
{
    int coff;
    int expo;
} p1[10], p2[10], p3[10];

int t1, t2, t3;

int display(struct poly p[10], int terms)
{
    int i;
    for (i = 0; i < terms; i++)
    {
        printf("%dx^%d", p[i].coff, p[i].expo);
        if (i != terms - 1)
        {
            printf("+");
        }
    }
}
int readpoly(struct poly p[10])
{
    int n, i;
    printf("\nEnter Terms: ");
    scanf("%d", &n);
    for (i = 0; i <n; i++)
    {
        printf("\nEnter coff %d: ", i);
        scanf("%d", &p[i].coff);
        printf("\nEnter exp %d: ", i);
        scanf("%d", &p[i].expo);
    }
    return n;
}
int addpoly(struct poly poly1[10], struct poly poly2[10], int term1, int term2)
{
    int i = 0, j = 0, k = 0;
    while (i < term1 && j < term2) //works for smae number of terms
    {
        if (poly1[i].expo == poly2[j].expo)
        {
            p3[k].coff = poly1[i].coff + poly2[j].coff;
            p3[k].expo = poly1[i].expo;
            j++;
            i++;
            k++;
        }
        else if (poly1[i].expo < poly2[j].expo)
        {
            p3[k].expo = poly2[j].expo;
            p3[k].coff = poly2[j].coff;
            k++;
            j++;
        }
        else
        {
            p3[k].expo = poly1[i].expo;
            p3[k].coff = poly1[i].coff;
            k++;
            i++;
        }
    }
    while (i < term1)//for poly 1 bal terms
    {
        p3[k].expo = poly1[i].expo;
        p3[k].coff = poly1[i].coff;
        k++;
        i++;
    }
    while (i < term2) //for poly 2 bal terms
    {
        p3[k].expo = poly2[j].expo;
        p3[k].coff = poly2[j].coff;
        k++;
        j++;
    }
    return k;
}

void main()
{

    t1 = readpoly(p1);
    printf("Polynomial 1: \n");
    display(p1, t1);
    t2 = readpoly(p2);
    display(p2, t2);
    printf("Polynomial 2: \n");
    t3 = addpoly(p1, p2, t1, t2);
    printf("Added polynomial is: \n");
    display(p3, t3);
}
