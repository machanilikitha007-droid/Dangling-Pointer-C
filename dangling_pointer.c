#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *ptr = 100;

    printf("Value before free: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    if (ptr == NULL)
        printf("Pointer is no longer pointing to allocated memory.\n");

    return 0;
}
