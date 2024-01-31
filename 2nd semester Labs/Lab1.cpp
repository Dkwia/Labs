#include <stdio.h>
#include <math.h>
#include <iostream>
#include "Lab2.cpp"
using namespace std;


int Easter_date(int year){
    int a = year % 19, b = year & 4, c = year % 7, d = (19 * a + 15) % 30, e = (2 * b + 4 * c + 6 * d + 6) % 7, f = d + e;
    return f;
}


float Exp(int n, float x){
    float y = pow(x,n);
    return y;
}


float cosinus(int x){
    float cosin = 1.0, eps = 0.0001;
    int n = 0;
    while (cosin > cos(x) + eps || cosin < cos(x) - eps){
        n++;
        cosin += pow(-1,n) * pow(x, 2 * n) / tgamma(2 * n + 1);
    }

    return cosin;
}


void Lab1_1(){
    int year;
    puts("Input year for Lab1_1\n");
    scanf("%d", &year);
    int result = Easter_date(year);
    if (result <= 26) {
        result += 4;
        printf("Lab1_1 Result = %d April\n", result);
    }
    else{
        result -= 26;
        printf("Lab1_1 Result = %d May\n", result);
    }
}


void Lab1_2(){
    int n;
    float x;
    puts("Input ur float x and int n for Lab1_2\n");
    scanf("%f %d",&x,&n);
    float result = Exp(n,x);
    printf("Lab1_2 Result = %.3f\n ", result);
}


void Lab1_3(){
    int x;
    puts("Input ur int x for Lab1_3\n");
    scanf("%d",&x);
    float result = cosinus(x);
    printf("Lab1_3 Result = %f cos(x) = %f\n", result, cos(x));
}


int main(){
//    Lab1_1();
//    Lab1_2();
//    Lab1_3();