
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