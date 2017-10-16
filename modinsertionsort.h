#ifndef MODINSERTIONSORT_H
#define MODINSERTIONSORT_H
#include<iostream>
#include<vector>
   using std::vector;

/*
 *    modified insertion sort with binary search instead of linear search
 */


int binarySearch(vector<int>& v, int item, int low, int high)
{
    if (high <= low){
        return (item > v[low])?  (low + 1): low;
    }
 
    int mid = (low + high)/2;
 
    if(item == v[mid]){
        return mid+1;
    }
 
    if(item > v[mid]){
        return binarySearch(v, item, mid+1, high);
    }
    return binarySearch(v, item, low, mid-1);
}
 
// Function to sort an array a[] of size 'n'
void modinsertionsort(vector<int>& v, int& count)
{
    int i, loc, j, k, selected;
 
    for (i = 1; i < v.size(); ++i)
    {
        j = i - 1;
        selected = v[i];
 
        // find location where selected sould be inseretd
        loc = binarySearch(v, selected, 0, j);
        count++;
        // Move all elements after location to create space
        while (j >= loc)
        {
            v[j+1] = v[j];
            j--;
            count++;
        }
        v[j+1] = selected;
    }
    count++;
    return;
}


#endif


// #endif
