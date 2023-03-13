#include <stdio.h>

int main() {
    int array_size, i, arr[100], total = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &array_size);


    for (i = 0; i < array_size; i++)
        {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < array_size; i++)
        {
        total += arr[i];
    }
    printf("Total= %d", total);

    return 0;
}
