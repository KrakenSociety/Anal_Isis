/*
*   Aight bois, this one's simple. It should sort an integer vector passed to it, i.e:
*               selectionsort(vector); <-- should work
*
*
*/
#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <algorithm>

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    
#include <cstdlib>
#include <vector>
    using std::vector;



    
void selectionsort(vector<int>& v, int& count){
    int i, j;
    count = 0;
    for(int j = 0; j < v.size()-1; ++j){
        count++;// for oop ^above
        //assume first value is the minimum
        int min = j;
        //run through array to verify
        count++;//for loop below
        for(i = j+1; i < v.size(); ++i){
            count++;//for if below
            if(v[i] < v[min]){
                min = i;
            }
        }
        //perform swap if another minimum value is found
        count++;//for if below
        if(min != j){
            std::swap(v[j], v[min]);
        }
    }
}

#endif
