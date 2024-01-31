#include <cstdio>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}


void Lab3_1(){

    int n, positive = 0, negative = 0;

    puts("Input the length of dynamic array in Lab3_1");
    scanf("%d", &n);

    int* dynamicArray = (int*) malloc (n * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < n; i++){
        dynamicArray[i] = rand() % 100 - 50;
    }

    for (int i = 0; i < n; i++){
        if (dynamicArray[i] > 0) positive++;
        if ( dynamicArray[i] < 0 ) negative++;
    }

    int* positiveNums = (int*) malloc(positive*sizeof(int));
    int* negativeNums = (int*) malloc(negative*sizeof(int));
    int pos = 0, neg = 0;

    for (int i = 0; i < n; i++){
        if (dynamicArray[i] > 0) {
            positiveNums[pos] = dynamicArray[i];
            pos++;
        }
        else if (dynamicArray[i] < 0) {
            negativeNums[neg] = dynamicArray[i];
            neg++;
        }

    }

    for (int i = 0; i < positive; i++){
        printf("positiveNums[%d] = %d\n", i, positiveNums[i]);
    }

    for (int i = 0; i < negative; i++){
        printf("negativeNums[%d] = %d\n", i, negativeNums[i]);
    }

}


void Lab3_2(){
    int n;

    puts("Input the length of dynamic array A in Lab3_2");
    scanf("%d", &n);
    int *dynamicArrayB = new int(n);

    int* dynamicArrayA = (int*) malloc (n * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < n; i++){
        dynamicArrayA[i] = rand() % 100 - 50;
    }
    
}


int main(){
//    Lab3_1();
    Lab3_2();
}