#include <stdio.h>

//   9/9/2020
//   Assignment 3
//   Haotian Gan
//   Assignment Title: 03_euler

unsigned long sumSquareDifference(unsigned long upTo){
    return (((upTo)*(upTo+1))/2)*(((upTo)*(upTo+1))/2) - ((upTo)*(upTo+1)*(2*upTo+1))/6 ;
}

unsigned long allTheMultiplesUnderN(unsigned long n){
    if(n == 0) return 0;
    n = n-1;
    unsigned long sumOfMultiplesOf3 = 3 * (n/3)*((n/3+1))/2;
    unsigned long sumOfMultiplesOf5 = 5 * (n/5)*((n/5+1))/2;
    unsigned long sumOfMultiplesOf15 = 15 * (n/15)*(n/15+1)/2;
    return sumOfMultiplesOf3 + sumOfMultiplesOf5 - sumOfMultiplesOf15;
}
unsigned long smallestMultiple(long n){
    unsigned long candidate = 1;
    while (1)
    {
        long i = n;
        for(i; i >= 1; i--){
            if(candidate % i != 0) break;
            if(i == 1) return candidate;
        }
        candidate++;
    }
    

}

int main(){
    printf("Problem 6: %lu\n", sumSquareDifference(100));
    printf("Problem 5: %lu\n", smallestMultiple(20));
    printf("Problem 1: %lu\n", allTheMultiplesUnderN(1000));
    return 0;
}