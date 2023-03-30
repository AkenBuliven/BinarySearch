#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <math.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>


// функция заполнения массива случайными значениями от 1 до 100
void rand_fill(int arr[], int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        arr[i] = (rand() %100) + 1;
    }
    return;
}

// выводит массив на экран
void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return;
}

// сортировка пузырьком
void bubble_sort(int arr[], int size){
    int start;
    int swaps = 1;
    while(swaps > 0){
        start = 0;
        swaps = 0;
        while(start + 1 < size){
            if(arr[start] > arr[start + 1]){
                int tmp = arr[start];
                arr[start] = arr[start + 1];
                arr[start + 1] = tmp;
                start++;
                swaps++;
            } else
                start++;
        }
    }
    return;
}

#endif