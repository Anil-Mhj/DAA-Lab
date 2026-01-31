// c program to implement sequential search
#include <stdio.h>
#include <time.h>

int main()
{
    int arr[] = {33, 5, 12, 40, 9, 21, 38, 7, 16, 20};
    int n, i, target, found = 0;
    clock_t start, end;
    double cpu_time_used;
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the element to search: ");
    scanf("%d", &target);

    start = clock();

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            break;
        }
    }

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (found)
    {
        printf("Element %d found at index %d\n", target, i);
    }
    else
    {
        printf("Element %d not found in the array\n", target);
    }
    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}