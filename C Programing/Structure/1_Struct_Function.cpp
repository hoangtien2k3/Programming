
// Struct Fuction

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

typedef struct 
{
    int size;
    int arr[100];
} arr_integer;

int adjacentElementsProduct(arr_integer inputArray)
{
    int arrLength = inputArray.size;
    int max = inputArray.arr[0] * inputArray.arr[1];

    for (int i = 1; i < arrLength - 1; i++)
    {
        if (inputArray.arr[i] * inputArray.arr[i + 1] > max)
        {
            max = inputArray.arr[i] * inputArray.arr[i + 1];
        }
    }
    return max;
}

int main()
{
    arr_integer array;
    printf("Enter size of the array: ");
    scanf("%d", &array.size);
    printf("Enter the elements in array: ");
    for (int i = 0; i < array.size; i++)
    {
        scanf("%d", &array.arr[i]);
    }
    int res = adjacentElementsProduct(array);
    printf("Max is %d", res);

    return 0;
}

