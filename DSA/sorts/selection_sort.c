/*
*
* Selection sort will walk throught a array to find the smaller element
* change to the first position
* move 1 position forward and walk the sub array A[1, ...]
* change the 2 smaller number to the new position
* go on
*/

#include <stddef.h>
#include <stdio.h>

#define n 5

int main(){
    size_t arr[n] = {5,4,3,2,1};
 
  for (int i = 0; i < n; i++){  
    // we will capture the index of the smallest value with this var.
    int small_index = i;

    // create a new var to walk through de subarray arr[i,...]

    int w = i +1;
    while (w < n){
        if (arr[w] < arr[small_index]){
            small_index = w;
            w++;
        } else {w++;}
    }    
        
    size_t temp = arr[i];
    arr[i] = arr[small_index];
    arr[small_index] = temp;
};

for (int i = 0; i < n; i++){
        printf("%zu\n", arr[i]);};

}

