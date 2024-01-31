#include <cstdio>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int Is_positive(int num){

    if ( num > 0 ) return num;
    else return 0;

}




void Negative_and_positive_nums(int array[], int size){

    int positive[size];
    int c = 0;
    for (int i = 0; i < size; i++){
        if (array[i] < 0) printf("%d is negative\n", array[i]);
        else if (array[i] > 0) {
            positive[c] = array[i];
            c++;
        }
    }
    for (int j = 0; j < c; j++){
        if (positive[j] != 0) printf("%d is positive\n", positive[j]);
    }

}


void DecToBin( int num ) {

    if ( num >= 2 ) {
        DecToBin( num/2 );
    }
    cout << num % 2;

}

void Lab2_1(){

    int num;
    int result = 0;

    puts("Input ur number for Lab2_1\n To exit input 0");
    scanf("%d", &num);

    while (num != 0){
        if (Is_positive(num) != 0) {
            result = Is_positive(num);
            printf("%d is positive\n", num, result);
        }

        scanf("%d", &num);
    }
    puts("End of chain");

}


void Lab2_2(){

    srand(time(NULL));
    int size = 100;
    int n;

    puts("Input length of array for Lab2_2");
    scanf("%d", &n);
    int array[n];

    puts("Array nums:\n");
    for (int i = 0; i < n; i++){
        array[i] = rand() % size - 50;
        printf("%d\n", array[i]);
    }
    puts("\n");
    Negative_and_positive_nums(array,n);

}


void Lab2_3(){

    int num;
    puts("Input ur number in 10 notation for Lab2_3");
    scanf("%d", &num);
    DecToBin(num);

}


int main(){
     Lab2_1();
     Lab2_2();
     Lab2_3();
}


