/*
    Insertion-sort is good for small amount of data
    We start with a empty array and insert one item
    then compare with the next and put in the right position
*/

#include <stdio.h>

int main(){

    // We will start with a array with n random elements to sort them
    // define a number to use like a VLA
    #define n 5

    int A[n] = {99,8,2,3,4};

    // dont worry about the first position, insert-sort make a comparison looking on the another pick
    for (int j = 1; j < n; j++){
        int key = A[j];
        
        int i = j-1;

        // we use a while here because if the number A[i] is bigger than the pick
        // we add in front of j-1 = i, and keep adding while the condition is true.

        // this is what we call "invariante de laço"
        // some time A[i] will be the larger number. this will define if the while will be executed or not.

        while (i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i+1] = key;
        
        // get the pivot
        // calculate the index BEFORE our pivot
        // if the value BEFORE our pivot ir larger than our pivot and its index is representable
        // we will put him in the place of our PIVOT and keep backing until all the numbers before our pivot is sorted
        // if not
        // we give OUR pivot to the next item
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}
