#include <stdio.h>

int main(void)
{
    int arr[10];
    int read_count = 0;
    int read_data;
    int i;

    while (1)
    {
        printf("input int: ");
        scanf("%d", &read_data);
        if (read_data < 1)
            break;
        
        arr[read_count++] = read_data;
    }
    for (i = 0; i < read_count; i++)
        printf("%d ", arr[i]);
}