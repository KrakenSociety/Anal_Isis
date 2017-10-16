#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include<iostream>
#include<vector>
   using std::vector;

/*
 *    sorts upon insert. just give it the vector and the count
 *    and you should be good
 */

void insertionsort(vector<int> v, int& count){
   int i, key, j;
   for (i = 1; i < v.size(); ++i){
       key = v[i];
       j = i-1;
       while (j >= 0 && v[j] > key){
           v[j+1] = v[j];
           j = j-1;
           ++count;
       }
       v[j+1] = key;
   }
}

#endif
