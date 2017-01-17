/*
    PROBLEM #2
    Choose the correct variable to be returned
    if you want to find the maximum value of an array
    (just fill in the blank)
*/

#include<iostream>
using namespace std;

int find_maximum(/* the parameters are an array "A" and its length "N" */){
    int b,c,d,e,f,g;
    int i;

    c = -1000000000;
    d = 1000000000;
    for(i=0; i<N; i++){
        b += A[i];
        if(A[i] > c){
            c = A[i];
            e = i;
        }
        if(A[i] < d){
            d = A[i];
            f = i;
        }
    }
    g = b / n;

    return ...;
}

/*
    leave the rest of the code
*/
