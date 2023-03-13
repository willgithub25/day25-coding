#include <stdio.h>

int main() {
    int array_size, i, arr[100], max_num, min_num;
    printf("Enter the number of values\n");
    scanf("%d", &array_size);


    for (i = 0; i < array_size; i++) {
        scanf("%d", &arr[i]);
    }
    max_num = arr[0];
    min_num = arr[0];

    for (i = 1; i < array_size; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i];
        }
        if (arr[i] < min_num) {
            min_num = arr[i];
        }
    }

    printf("Maximum value is %d\n Minimum value is %d\n", max_num, min_num);
    printf("Difference is %d",max_num-min_num);

    return 0;
}
