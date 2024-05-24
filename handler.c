//
// Created by Onelots on 24/05/2024.
//
#include "functions/functions.h"
#include <stdio.h>

int launch() {
    int T[] = {5, 4, 3, 2, 1};
    int n = sizeof(T) / sizeof(T[0]);

    printf("Original array: ");

    for (int i = 0; i < n; i++)
    {

        printf("%d ", T[i]);

    }
    printf("\n");

    merge_sort(T, 0, n - 1);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++)
    {

        printf("%d ", T[i]);

    }

    printf("\n");

    return 0;
}