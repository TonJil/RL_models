
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
//BST Search
int binary_search(int* array, int start, int end, int key){
    if(start>end) return -99;
 
    int mid=(start+end)/2;
 
    if(array[mid] == key) {
        return mid;
    }else if(array[mid] > key) { 
        return binary_search(array,0,mid-1,key);
    }
    else 
        return binary_search(array,mid+1,end,key);
}
 
int main(void){
    srand(time(NULL));
 
    int array[100];
    int i
    ;
    for(i=0; i<100; i++){
        array[i]=2*i+1;
    }
 
    int key = 75;
 
    printf("%d\n",binary_search(array, 0, 99, key));
 