
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
//BST Search
int binary_search(int* array, int start, int end, int key){
    if(start>end) return -99;
 
    int mid=(start+end)/2;
 