//
// Created by Onelots on 24/05/2024.
//
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

void merge(int *t, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
    {

        L[i] = t[l + i];

    }

    for (int j = 0; j < n2; j++)
    {

        R[j] = t[mid + 1 + j];

    }


    int i = 0, j = 0, k = l;

    printf("Merging [%d, %d] and [%d, %d]\n", l, mid, mid + 1, r);

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            t[k] = L[i];
            i++;
        }
        else
        {
            t[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        t[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        t[k] = R[j];
        j++;
        k++;
    }

    printf("Merged [%d, %d] and [%d, %d] into {", l, mid, mid + 1, r);

    for (int i = l; i <= r; i++)
    {

        printf("%d", t[i]);
        if (i < r) printf(" ");

    }

    printf("}\n");

    free(L);
    free(R);
}

void merge_sort(int *t, int l, int r)
{

    if (l < r)
    {

        int mid = l + (r - l) / 2;

        printf("Sorting [%d, %d]\n", l, r);

        merge_sort(t, l, mid);
        merge_sort(t, mid + 1, r);
        merge(t, l, mid, r);

        printf("Sorted [%d, %d]\n", l, r);

    }

    else
    {

        printf("Sorted [%d, %d]\n", l, r);

    }
}
