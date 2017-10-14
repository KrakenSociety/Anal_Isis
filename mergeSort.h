/*
*	Aight bois, this one is a little bit more complex, use expected format for function call, i.e:
*				mergesort(vector); <-- should work
*	basically breaks up vector into smaller sub-arrays until only a single value is left and sorts all that mess
*	combining it all together at the end to result in a sorted vector
*
*
*/


#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    
#include <cstdlib>
#include <vector>
    using std::vector;

void merge(vector<int>& a, int low, int mid, int end){
	//create temp to complete sorting process
	int temp[end-low+1];
	int i = low;
	int j = mid + 1;
    int k = 0;
 
	// Merge the two sections into temp[].
	while (i <= mid && j <= end){
		if (a[i] < a[j]){
			temp[k] = a[i];
			k++;
			i++;
		}
		else{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	// Insert remaining data from i to mid into temp[].
	while (i <= mid){
		temp[k] = a[i];
		k++;
		i++;
	}
	// Insert remaining data from j to end into temp[].
	while (j <= end){
		temp[k] = a[j];
		k++;
		j++;
	}
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= end; i++){
		a[i] = temp[i-low];
	}
}
// A function to split array into two parts.
void mergesort(vector<int>& a, int low, int end){
	int mid;
	if (low < end){
		mid=(low+end)/2;
		// Split the data into two halves.
		mergesort(a, low, mid);
		mergesort(a, mid+1, end);
 
		// Merge the  split data into a complete, sorted from.
		merge(a, low, mid, end);
	}
}
//function meant to serve for intuitive use
void mergesort(vector<int>& a){
    mergesort(a, 0, a.size());
}
#endif
