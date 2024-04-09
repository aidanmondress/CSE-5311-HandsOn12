#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int* arr;
    size_t usedSize;
    size_t totalSize;
} dynamicArray;

void makeArray(dynamicArray* arr, size_t n) 
{
    arr->arr = (int*)malloc(n * sizeof(int));
    arr->usedSize = 0;
    arr->totalSize = n;
}

void freeArray(DynamicArray* arr) 
{
    free(arr->arr);
    arr->arr = NULL;
    arr->usedSize = arr->totalSize = 0;
}

void insertArray(dynamicArray* arr, int i) 
{
    if(arr->usedSize == arr->totalSize)
    {
        arr->totalSize *= 2;
        arr->arr = (int*)realloc(arr->arr, arr->totalSize * sizeof(int));
    }
    arr->arr[arr->usedSize++] = i;
}

int main() 
{
    dynamicArray arr;
    makeArray(&arr, 10);
    for(int i = 0; i < 10; i++)
    {
        insertArray(&arr, i);
    }
    printf("Array Element 5: %d\n", a.array[4]);
    freeArray(&a);
}
