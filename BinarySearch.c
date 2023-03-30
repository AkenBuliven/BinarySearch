#include <stdio.h>
#include "functions.h"

int binarySearch(int x, int arr[], int size);

int main () {
    int x;
    printf("x : ");
    scanf("%d", &x);
    int array_size;
    printf("Введите размер массива : ");
    scanf("%d", &array_size);
    int array[array_size];
    rand_fill(array, array_size);
    print_array(array, array_size);
    printf("\n");
    bubble_sort(array, array_size);
    print_array(array, array_size);
    int res = binarySearch(x, array, array_size);
    printf("\nРезультат : %d\n", res);
    return 0;
}

int binarySearch(int x, int arr[], int size) {
    int min = 0;
    int max = size -1;
    int mid;
    while (min <= max){
        mid = (max + min) / 2;
        if (x > arr[mid]){
            min = mid + 1;
        } else if (x < arr[mid]){
            max = mid - 1;
        } else if (x == arr[mid]){
            return mid;
        }   
    }
     return -1;
}


